#pragma once

#include "data/entity.h"
#include "lmath.h"
#include "bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h"
#include "data/import_common.h"
#include "ai.h"

namespace VI
{

struct Transform;
struct Rope;
struct View;
struct DamageEvent;

#define AWK_SHIELD 1
#define AWK_HEALTH 5
#define AWK_FLY_SPEED 35.0f
#define AWK_CRAWL_SPEED 2.0f
#define AWK_MIN_COOLDOWN 2.0f
#define AWK_MAX_DISTANCE_COOLDOWN 6.0f
#define AWK_COOLDOWN_DISTANCE_RATIO ((AWK_MAX_DISTANCE_COOLDOWN - AWK_MIN_COOLDOWN) / AWK_MAX_DISTANCE)
#define AWK_LEGS 3
#define AWK_INVINCIBLE_TIME 3.0f
#define AWK_SNIPE_DISTANCE 100.0f
#define AWK_CHARGES 3

// If we raycast through a Minion's head, keep going.
struct AwkRaycastCallback : btCollisionWorld::ClosestRayResultCallback
{
	r32 closest_target_hit_fraction;
	s16 closest_target_hit_group;
	b8 hit_target() const;
	ID entity_id;

	AwkRaycastCallback(const Vec3&, const Vec3&, const Entity*);

	btScalar addSingleResult(btCollisionWorld::LocalRayResult&, b8);
};

struct TargetEvent;
struct Target;

struct Awk : public ComponentType<Awk>
{
	enum class State
	{
		Crawl,
		Dash,
		Fly,
	};

	struct Footing
	{
		Ref<const Transform> parent;
		Vec3 pos;
		Vec3 last_abs_pos;
		r32 blend;
	};

	static Awk* closest(AI::TeamMask, const Vec3&, r32* = nullptr);

	Vec3 velocity;
	Link done_flying;
	Link done_dashing;
	LinkArg<const Vec3&> bounce;
	LinkArg<Entity*> hit;
	StaticArray<Ref<Entity>, 4> hit_targets;
	Link detached;
	Link dashed;
	r32 attach_time;
	r32 invincible_timer;
	r32 snipe_time;
	r32 cooldowns[AWK_CHARGES]; // remaining cooldown time
	Footing footing[AWK_LEGS];
	r32 last_speed;
	r32 last_footstep;
	Vec3 lerped_pos;
	Quat lerped_rotation;
	Vec3 last_pos;
	Ref<Entity> shield;
	r32 particle_accumulator;
	r32 dash_timer;
	b8 snipe;
	u8 cooldown_index;

	Awk();
	void awake();
	~Awk();

	r32 range() const;

	s32 charges() const;
	void cooldown_setup(r32 = AWK_MIN_COOLDOWN);
	State state() const;
	b8 dash_start(const Vec3&);
	b8 cooldown_can_shoot() const; // can we go?
	void hit_by(const TargetEvent&); // called when we get hit
	void hit_target(Entity*, const Vec3&); // called when we hit a target
	void damaged(const DamageEvent&);
	void killed(Entity*);
	Entity* incoming_attacker() const;

	s16 ally_containment_field_mask() const;

	b8 predict_intersection(const Target*, Vec3*) const;

	void stealth(b8);

	void reflect(const Vec3&, const Vec3&);
	void crawl_wall_edge(const Vec3&, const Vec3&, const Update&, r32);
	b8 transfer_wall(const Vec3&, const btCollisionWorld::ClosestRayResultCallback&);
	void move(const Vec3&, const Quat&, const ID);
	void crawl(const Vec3&, const Update&);
	void update_offset();
	void update_lerped_pos(r32, const Update&);

	void set_footing(s32, const Transform*, const Vec3&);

	Vec3 center_lerped() const;
	Vec3 attach_point() const;

	void detach_teleport();
	b8 detach(const Vec3&);

	void snipe_enable(b8);

	void finish_flying_dashing_common();
	void finish_flying();
	void finish_dashing();
	b8 direction_is_toward_attached_wall(const Vec3&) const;
	b8 can_shoot(const Vec3&, Vec3* = nullptr, b8* = nullptr) const;
	b8 can_hit(const Target*, Vec3* = nullptr) const;

	void movement_raycast(const Vec3&, const Vec3&);

	void update(const Update&);
};

}
