#include "player.h"
#include <GLFW/glfw3.h>
#include "physics.h"
#include "data/components.h"

#define fov_initial PI * 0.25f
#define speed 5.0f
#define speed_mouse 0.0025f

Player::Player()
{
	Transform* transform = Entities::all.component<Transform>(this);

	btBoxShape* shape = new btBoxShape(btVector3(5.0f, 5.0f, 5.0f));
	btRigidBody::btRigidBodyConstructionInfo cInfo(5.0f, transform, shape, btVector3(0, 0, 0));

	RigidBody* body = Entities::all.component<RigidBody>(this, shape, cInfo);
}

void Player::awake()
{
	Entities::all.update.add(this);
	transform = get<Transform>();
	body = get<RigidBody>();
}

Player::~Player()
{
	Entities::all.update.remove(this);
}

void Player::exec(EntityUpdate u)
{
	// Compute new orientation
	angle_horizontal += speed_mouse * float(1024/2 - u.input->cursor_x );
	angle_vertical   += speed_mouse * float( 768/2 - u.input->cursor_y );

	// Direction : Spherical coordinates to Cartesian coordinates conversion
	Vec3 direction = Vec3(
		(float)(cos(angle_vertical) * sin(angle_horizontal)),
		(float)(sin(angle_vertical)),
		(float)(cos(angle_vertical) * cos(angle_horizontal))
	);
	
	Vec3 force = Vec3::zero;

	if (u.input->mouse)
	{
		const float radius = 10000.0f;
		btVector3 rayStart(transform->pos.x, transform->pos.y, transform->pos.z);
		btVector3 rayEnd(transform->pos.x + direction.x * radius, transform->pos.y + direction.y * radius, transform->pos.z + direction.z * radius);
		btCollisionWorld::ClosestRayResultCallback rayCallback(rayStart, rayEnd);

		// Perform raycast
		Physics::world.btWorld->rayTest(rayStart, rayEnd, rayCallback);

		if (rayCallback.hasHit())
		{
			rayEnd = rayCallback.m_hitPointWorld;
			force = direction * speed;
		}
	}
	
	// Right vector
	Vec3 right = Vec3(
		(float)(sin(angle_horizontal - 3.14f/2.0f)),
		0,
		(float)(cos(angle_horizontal - 3.14f/2.0f))
	);
	
	// Up vector
	Vec3 up = right.cross(direction);

	// Move forward
	if (u.input->keys[GLFW_KEY_W] == GLFW_PRESS)
		force += direction * u.time.delta * speed;
	// Move backward
	if (u.input->keys[GLFW_KEY_S] == GLFW_PRESS)
		force -= direction * u.time.delta * speed;
	// Strafe right
	if (u.input->keys[GLFW_KEY_D] == GLFW_PRESS)
		force += right * u.time.delta * speed;
	// Strafe left
	if (u.input->keys[GLFW_KEY_A] == GLFW_PRESS)
		force -= right * u.time.delta * speed;
	
	body->btBody.applyCentralImpulse(force);

	float FoV = fov_initial;

	// Projection matrix : 45° Field of View, 4:3 ratio, display range : 0.1 unit <-> 100 units
	float aspect = u.input->height == 0 ? 1 : (float)u.input->width / (float)u.input->height;
	projection = Mat4::perspective(FoV, aspect, 0.1f, 1000.0f);
	// Camera matrix
	view       = Mat4::look_at(
								transform->pos,           // Camera is here
								transform->pos+direction, // and looks here : at the same position, plus "direction"
								up                  // Head is up (set to 0,-1,0 to look upside-down)
						   );
}
