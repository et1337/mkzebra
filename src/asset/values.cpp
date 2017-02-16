#include "lookup.h"

namespace VI
{ 


const char* AssetLookup::Mesh::values[] =
{
	"assets/actor_collision.msh",
	"assets/awk.msh",
	"assets/character.msh",
	"assets/compass.msh",
	"assets/cone.msh",
	"assets/containment_field_base.msh",
	"assets/containment_field_sphere.msh",
	"assets/control_point.msh",
	"assets/cube.msh",
	"assets/cylinder_inside.msh",
	"assets/energy.msh",
	"assets/grenade.msh",
	"assets/grenade_attached.msh",
	"assets/hack_kit.msh",
	"assets/hobo.msh",
	"assets/icon_battery_0.msh",
	"assets/icon_battery_1.msh",
	"assets/icon_battery_2.msh",
	"assets/icon_battery_3.msh",
	"assets/icon_bolter.msh",
	"assets/icon_close.msh",
	"assets/icon_containment_field.msh",
	"assets/icon_drone.msh",
	"assets/icon_energy.msh",
	"assets/icon_gamepad.msh",
	"assets/icon_grenade.msh",
	"assets/icon_hack_kit.msh",
	"assets/icon_minion.msh",
	"assets/icon_network_error.msh",
	"assets/icon_rocket.msh",
	"assets/icon_select.msh",
	"assets/icon_sensor.msh",
	"assets/icon_sniper.msh",
	"assets/interactable.msh",
	"assets/interactable_collision.msh",
	"assets/ivory_ad.msh",
	"assets/locke.msh",
	"assets/meursault.msh",
	"assets/parkour.msh",
	"assets/parkour_headless.msh",
	"assets/plane.msh",
	"assets/reticle_dash.msh",
	"assets/rocket_base.msh",
	"assets/rocket_pod.msh",
	"assets/rope_base.msh",
	"assets/sailor.msh",
	"assets/seven.msh",
	"assets/shop.msh",
	"assets/shop_collision.msh",
	"assets/sky_decal.msh",
	"assets/sky_pattern.msh",
	"assets/skybox.msh",
	"assets/spawn.msh",
	"assets/sphere.msh",
	"assets/sphere_highres.msh",
	"assets/support.msh",
	"assets/support2.msh",
	"assets/target.msh",
	"assets/terminal.msh",
	"assets/terminal_collision.msh",
	"assets/tram_collision.msh",
	"assets/tram_collision_door.msh",
	"assets/tram_doors.msh",
	"assets/tram_mesh.msh",
	"assets/tram_mesh_1.msh",
	"assets/tram_runner.msh",
	"assets/tri_tube.msh",
	"assets/lvl/Dock_Cube.msh",
	"assets/lvl/Dock_Cube_001.msh",
	"assets/lvl/Dock_Cube_002.msh",
	"assets/lvl/Dock_Cube_003.msh",
	"assets/lvl/Dock_Cube_004.msh",
	"assets/lvl/Dock_Cube_005.msh",
	"assets/lvl/Dock_Cube_006.msh",
	"assets/lvl/Dock_Cube_007.msh",
	"assets/lvl/Dock_buildings.msh",
	"assets/lvl/Dock_buildings_001.msh",
	"assets/lvl/Dock_buildings_002.msh",
	"assets/lvl/Dock_buildings_003.msh",
	"assets/lvl/Dock_buildings_004.msh",
	"assets/lvl/Dock_buildings_005.msh",
	"assets/lvl/Dock_buildings_006.msh",
	"assets/lvl/Dock_buildings_007.msh",
	"assets/lvl/Dock_buildings_008.msh",
	"assets/lvl/Dock_buildings_009.msh",
	"assets/lvl/Dock_buildings_010.msh",
	"assets/lvl/Dock_buildings_011.msh",
	"assets/lvl/Dock_buildings_012.msh",
	"assets/lvl/Dock_buildings_013.msh",
	"assets/lvl/Dock_buildings_014.msh",
	"assets/lvl/Dock_buildings_015.msh",
	"assets/lvl/Dock_buildings_017.msh",
	"assets/lvl/Dock_buildings_018.msh",
	"assets/lvl/Dock_buildings_019.msh",
	"assets/lvl/Dock_buildings_020.msh",
	"assets/lvl/Dock_buildings_021.msh",
	"assets/lvl/Dock_buildings_022.msh",
	"assets/lvl/Dock_buildings_023.msh",
	"assets/lvl/Dock_buildings_024.msh",
	"assets/lvl/Dock_buildings_025.msh",
	"assets/lvl/Dock_mountain.msh",
	"assets/lvl/Dock_mountain_001.msh",
	"assets/lvl/Dock_mountain_002.msh",
	"assets/lvl/Dock_water.msh",
	"assets/lvl/Ioke_Cube.msh",
	"assets/lvl/Ioke_Cube_002.msh",
	"assets/lvl/Ioke_Cube_004.msh",
	"assets/lvl/Ioke_Cube_005.msh",
	"assets/lvl/Ioke_Cube_006.msh",
	"assets/lvl/Ioke_Cube_007.msh",
	"assets/lvl/Ioke_bsp_model_0_000.msh",
	"assets/lvl/Ioke_bsp_model_0_001.msh",
	"assets/lvl/Ioke_bsp_model_0_002.msh",
	"assets/lvl/Ioke_bsp_model_0_002_1.msh",
	"assets/lvl/Ioke_bsp_model_0_003.msh",
	"assets/lvl/Ioke_bsp_model_0_003_1.msh",
	"assets/lvl/Ioke_bsp_model_0_004.msh",
	"assets/lvl/Ioke_bsp_model_0_004_1.msh",
	"assets/lvl/Ioke_bsp_model_0_005.msh",
	"assets/lvl/Ioke_bsp_model_0_005_1.msh",
	"assets/lvl/Ioke_bsp_model_0_006.msh",
	"assets/lvl/Ioke_bsp_model_0_006_1.msh",
	"assets/lvl/Ioke_bsp_model_0_007.msh",
	"assets/lvl/Ioke_bsp_model_0_007_1.msh",
	"assets/lvl/Ioke_bsp_model_0_008.msh",
	"assets/lvl/Ioke_bsp_model_0_009.msh",
	"assets/lvl/Ioke_bsp_model_0_010.msh",
	"assets/lvl/Ioke_bsp_model_0_011.msh",
	"assets/lvl/Ioke_bsp_model_0_012.msh",
	"assets/lvl/Ioke_bsp_model_0_013.msh",
	"assets/lvl/Ioke_bsp_model_0_014.msh",
	"assets/lvl/Isthmus_Cube.msh",
	"assets/lvl/Isthmus_Cube_001.msh",
	"assets/lvl/Isthmus_Cube_1.msh",
	"assets/lvl/Isthmus_water.msh",
	"assets/lvl/Medias_Res_Cube.msh",
	"assets/lvl/Medias_Res_Cube_001.msh",
	"assets/lvl/Medias_Res_Cube_002.msh",
	"assets/lvl/Medias_Res_Cube_003.msh",
	"assets/lvl/Medias_Res_Cube_004.msh",
	"assets/lvl/Medias_Res_Cube_005.msh",
	"assets/lvl/Medias_Res_Cube_006.msh",
	"assets/lvl/Medias_Res_Cube_007.msh",
	"assets/lvl/Medias_Res_Cube_008.msh",
	"assets/lvl/Medias_Res_Cube_1.msh",
	"assets/lvl/Medias_Res_Plane.msh",
	"assets/lvl/Moros_Cube.msh",
	"assets/lvl/Moros_plaza_groupmesh_12365.msh",
	"assets/lvl/Moros_plaza_groupmesh_12365_1.msh",
	"assets/lvl/Pistis_InteriorWater1.msh",
	"assets/lvl/Pistis_InteriorWater2.msh",
	"assets/lvl/Pistis_dam_groupmesh_6481.msh",
	"assets/lvl/Pistis_dam_groupmesh_6481_1.msh",
	"assets/lvl/Ponos_Cube.msh",
	"assets/lvl/Ponos_Cube_001.msh",
	"assets/lvl/Ponos_Cube_002.msh",
	"assets/lvl/Ponos_Cube_003.msh",
	"assets/lvl/Ponos_Cube_003_1.msh",
	"assets/lvl/Ponos_Cube_006.msh",
	"assets/lvl/Ponos_Cube_007.msh",
	"assets/lvl/Ponos_Cube_008.msh",
	"assets/lvl/Ponos_Cube_009.msh",
	"assets/lvl/Ponos_Cube_011.msh",
	"assets/lvl/Ponos_Cube_011_1.msh",
	"assets/lvl/Ponos_Cube_1.msh",
	"assets/lvl/Ponos_bsp_model_0_000.msh",
	"assets/lvl/Port_District_Cube_002.msh",
	"assets/lvl/Port_District_Cube_002_1.msh",
	"assets/lvl/Port_District_Cube_003_proxy_001.msh",
	"assets/lvl/Port_District_Cube_003_proxy_002.msh",
	"assets/lvl/Port_District_Cube_003_proxy_003.msh",
	"assets/lvl/Port_District_Cube_004.msh",
	"assets/lvl/Port_District_Cube_005.msh",
	"assets/lvl/Port_District_Cube_006.msh",
	"assets/lvl/Port_District_Cube_006_1.msh",
	"assets/lvl/Port_District_Cube_007.msh",
	"assets/lvl/Port_District_Cube_007_1.msh",
	"assets/lvl/Port_District_Cube_008.msh",
	"assets/lvl/Port_District_Cube_008_1.msh",
	"assets/lvl/Port_District_Cube_009.msh",
	"assets/lvl/Port_District_Cube_010.msh",
	"assets/lvl/Port_District_Cylinder.msh",
	"assets/lvl/Port_District_Text.msh",
	"assets/lvl/Port_District_ivory_ad_text.msh",
	"assets/lvl/Port_District_mountain_000.msh",
	"assets/lvl/Port_District_mountain_001_proxy_001.msh",
	"assets/lvl/Port_District_mountain_001_proxy_002.msh",
	"assets/lvl/Port_District_water.msh",
	"assets/lvl/Proci_cannon_groupmesh_11611.msh",
	"assets/lvl/Proci_cannon_groupmesh_11611_1.msh",
	"assets/lvl/Qualia_Cube.msh",
	"assets/lvl/Qualia_Cube_001.msh",
	"assets/lvl/Qualia_Cube_003.msh",
	"assets/lvl/Qualia_Cube_003_proxy_000.msh",
	"assets/lvl/Qualia_Cube_003_proxy_001.msh",
	"assets/lvl/Qualia_Cube_003_proxy_002.msh",
	"assets/lvl/Qualia_Cube_005.msh",
	"assets/lvl/Qualia_Cube_1.msh",
	"assets/lvl/Qualia_mountain_001_proxy_000.msh",
	"assets/lvl/Qualia_mountain_001_proxy_001.msh",
	"assets/lvl/Qualia_mountain_001_proxy_002.msh",
	"assets/lvl/Tyche_Cube.msh",
	"assets/lvl/Tyche_Cube_001.msh",
	"assets/lvl/Tyche_Cube_001_1.msh",
	"assets/lvl/Tyche_Cube_002.msh",
	"assets/lvl/Tyche_Cube_003.msh",
	"assets/lvl/Tyche_Cube_004.msh",
	"assets/lvl/Tyche_Cube_004_1.msh",
	"assets/lvl/Tyche_Cube_005.msh",
	"assets/lvl/Tyche_Cube_005_1.msh",
	"assets/lvl/Tyche_Cube_006.msh",
	"assets/lvl/Tyche_Cube_007.msh",
	"assets/lvl/Tyche_Cube_008.msh",
	"assets/lvl/Tyche_Cube_009.msh",
	"assets/lvl/Tyche_bsp_model_0_014.msh",
	"assets/lvl/Tyro_storage_groupmesh_22666.msh",
	"assets/lvl/Tyro_storage_groupmesh_22666_001.msh",
	"assets/lvl/Tyro_storage_groupmesh_22666_002.msh",
	"assets/lvl/Tyro_storage_groupmesh_22666_003.msh",
	"assets/lvl/Tyro_storage_groupmesh_22666_1.msh",
	"assets/lvl/overworld_Cube_000.msh",
	"assets/lvl/overworld_Cube_001.msh",
	"assets/lvl/overworld_Cube_002.msh",
	"assets/lvl/overworld_Cube_003.msh",
	"assets/lvl/overworld_Cube_004.msh",
	"assets/lvl/overworld_Cube_005.msh",
	"assets/lvl/overworld_Cube_006.msh",
	"assets/lvl/overworld_Cube_007.msh",
	"assets/lvl/overworld_Cube_008.msh",
	"assets/lvl/overworld_Cube_009.msh",
	"assets/lvl/overworld_Cube_010.msh",
	"assets/lvl/overworld_Cube_011.msh",
	"assets/lvl/overworld_Cube_012.msh",
	"assets/lvl/overworld_Cube_013.msh",
	"assets/lvl/overworld_Cube_014.msh",
	"assets/lvl/overworld_Cube_015.msh",
	"assets/lvl/overworld_Cube_016.msh",
	"assets/lvl/overworld_Cube_017.msh",
	"assets/lvl/overworld_Cube_018.msh",
	"assets/lvl/overworld_Cube_019.msh",
	"assets/lvl/overworld_Cube_020.msh",
	"assets/lvl/overworld_Cube_021.msh",
	"assets/lvl/overworld_Cube_022.msh",
	"assets/lvl/overworld_Cube_023.msh",
	"assets/lvl/overworld_Cube_024.msh",
	"assets/lvl/overworld_Cube_025.msh",
	"assets/lvl/overworld_Cube_026.msh",
	"assets/lvl/overworld_Cube_027.msh",
	"assets/lvl/overworld_Cube_028.msh",
	"assets/lvl/overworld_Cube_029.msh",
	"assets/lvl/overworld_Cube_030.msh",
	"assets/lvl/overworld_Cube_031.msh",
	"assets/lvl/overworld_Cube_032.msh",
	"assets/lvl/overworld_Cube_033.msh",
	"assets/lvl/overworld_Cube_034.msh",
	"assets/lvl/overworld_Cube_035.msh",
	"assets/lvl/overworld_Cube_036.msh",
	"assets/lvl/overworld_Cube_037.msh",
	"assets/lvl/overworld_Cube_038.msh",
	"assets/lvl/overworld_Cube_039.msh",
	"assets/lvl/overworld_Cube_040.msh",
	"assets/lvl/overworld_Cube_041.msh",
	"assets/lvl/overworld_Cube_042.msh",
	"assets/lvl/overworld_Cube_043.msh",
	"assets/lvl/overworld_Cube_044.msh",
	"assets/lvl/overworld_Pyramid.msh",
	"assets/lvl/overworld_water.msh",
	0,
};


const char* AssetLookup::Mesh::names[] =
{
	"actor_collision",
	"awk",
	"character",
	"compass",
	"cone",
	"containment_field_base",
	"containment_field_sphere",
	"control_point",
	"cube",
	"cylinder_inside",
	"energy",
	"grenade",
	"grenade_attached",
	"hack_kit",
	"hobo",
	"icon_battery_0",
	"icon_battery_1",
	"icon_battery_2",
	"icon_battery_3",
	"icon_bolter",
	"icon_close",
	"icon_containment_field",
	"icon_drone",
	"icon_energy",
	"icon_gamepad",
	"icon_grenade",
	"icon_hack_kit",
	"icon_minion",
	"icon_network_error",
	"icon_rocket",
	"icon_select",
	"icon_sensor",
	"icon_sniper",
	"interactable",
	"interactable_collision",
	"ivory_ad",
	"locke",
	"meursault",
	"parkour",
	"parkour_headless",
	"plane",
	"reticle_dash",
	"rocket_base",
	"rocket_pod",
	"rope_base",
	"sailor",
	"seven",
	"shop",
	"shop_collision",
	"sky_decal",
	"sky_pattern",
	"skybox",
	"spawn",
	"sphere",
	"sphere_highres",
	"support",
	"support2",
	"target",
	"terminal",
	"terminal_collision",
	"tram_collision",
	"tram_collision_door",
	"tram_doors",
	"tram_mesh",
	"tram_mesh_1",
	"tram_runner",
	"tri_tube",
	"Dock_Cube",
	"Dock_Cube_001",
	"Dock_Cube_002",
	"Dock_Cube_003",
	"Dock_Cube_004",
	"Dock_Cube_005",
	"Dock_Cube_006",
	"Dock_Cube_007",
	"Dock_buildings",
	"Dock_buildings_001",
	"Dock_buildings_002",
	"Dock_buildings_003",
	"Dock_buildings_004",
	"Dock_buildings_005",
	"Dock_buildings_006",
	"Dock_buildings_007",
	"Dock_buildings_008",
	"Dock_buildings_009",
	"Dock_buildings_010",
	"Dock_buildings_011",
	"Dock_buildings_012",
	"Dock_buildings_013",
	"Dock_buildings_014",
	"Dock_buildings_015",
	"Dock_buildings_017",
	"Dock_buildings_018",
	"Dock_buildings_019",
	"Dock_buildings_020",
	"Dock_buildings_021",
	"Dock_buildings_022",
	"Dock_buildings_023",
	"Dock_buildings_024",
	"Dock_buildings_025",
	"Dock_mountain",
	"Dock_mountain_001",
	"Dock_mountain_002",
	"Dock_water",
	"Ioke_Cube",
	"Ioke_Cube_002",
	"Ioke_Cube_004",
	"Ioke_Cube_005",
	"Ioke_Cube_006",
	"Ioke_Cube_007",
	"Ioke_bsp_model_0_000",
	"Ioke_bsp_model_0_001",
	"Ioke_bsp_model_0_002",
	"Ioke_bsp_model_0_002_1",
	"Ioke_bsp_model_0_003",
	"Ioke_bsp_model_0_003_1",
	"Ioke_bsp_model_0_004",
	"Ioke_bsp_model_0_004_1",
	"Ioke_bsp_model_0_005",
	"Ioke_bsp_model_0_005_1",
	"Ioke_bsp_model_0_006",
	"Ioke_bsp_model_0_006_1",
	"Ioke_bsp_model_0_007",
	"Ioke_bsp_model_0_007_1",
	"Ioke_bsp_model_0_008",
	"Ioke_bsp_model_0_009",
	"Ioke_bsp_model_0_010",
	"Ioke_bsp_model_0_011",
	"Ioke_bsp_model_0_012",
	"Ioke_bsp_model_0_013",
	"Ioke_bsp_model_0_014",
	"Isthmus_Cube",
	"Isthmus_Cube_001",
	"Isthmus_Cube_1",
	"Isthmus_water",
	"Medias_Res_Cube",
	"Medias_Res_Cube_001",
	"Medias_Res_Cube_002",
	"Medias_Res_Cube_003",
	"Medias_Res_Cube_004",
	"Medias_Res_Cube_005",
	"Medias_Res_Cube_006",
	"Medias_Res_Cube_007",
	"Medias_Res_Cube_008",
	"Medias_Res_Cube_1",
	"Medias_Res_Plane",
	"Moros_Cube",
	"Moros_plaza_groupmesh_12365",
	"Moros_plaza_groupmesh_12365_1",
	"Pistis_InteriorWater1",
	"Pistis_InteriorWater2",
	"Pistis_dam_groupmesh_6481",
	"Pistis_dam_groupmesh_6481_1",
	"Ponos_Cube",
	"Ponos_Cube_001",
	"Ponos_Cube_002",
	"Ponos_Cube_003",
	"Ponos_Cube_003_1",
	"Ponos_Cube_006",
	"Ponos_Cube_007",
	"Ponos_Cube_008",
	"Ponos_Cube_009",
	"Ponos_Cube_011",
	"Ponos_Cube_011_1",
	"Ponos_Cube_1",
	"Ponos_bsp_model_0_000",
	"Port_District_Cube_002",
	"Port_District_Cube_002_1",
	"Port_District_Cube_003_proxy_001",
	"Port_District_Cube_003_proxy_002",
	"Port_District_Cube_003_proxy_003",
	"Port_District_Cube_004",
	"Port_District_Cube_005",
	"Port_District_Cube_006",
	"Port_District_Cube_006_1",
	"Port_District_Cube_007",
	"Port_District_Cube_007_1",
	"Port_District_Cube_008",
	"Port_District_Cube_008_1",
	"Port_District_Cube_009",
	"Port_District_Cube_010",
	"Port_District_Cylinder",
	"Port_District_Text",
	"Port_District_ivory_ad_text",
	"Port_District_mountain_000",
	"Port_District_mountain_001_proxy_001",
	"Port_District_mountain_001_proxy_002",
	"Port_District_water",
	"Proci_cannon_groupmesh_11611",
	"Proci_cannon_groupmesh_11611_1",
	"Qualia_Cube",
	"Qualia_Cube_001",
	"Qualia_Cube_003",
	"Qualia_Cube_003_proxy_000",
	"Qualia_Cube_003_proxy_001",
	"Qualia_Cube_003_proxy_002",
	"Qualia_Cube_005",
	"Qualia_Cube_1",
	"Qualia_mountain_001_proxy_000",
	"Qualia_mountain_001_proxy_001",
	"Qualia_mountain_001_proxy_002",
	"Tyche_Cube",
	"Tyche_Cube_001",
	"Tyche_Cube_001_1",
	"Tyche_Cube_002",
	"Tyche_Cube_003",
	"Tyche_Cube_004",
	"Tyche_Cube_004_1",
	"Tyche_Cube_005",
	"Tyche_Cube_005_1",
	"Tyche_Cube_006",
	"Tyche_Cube_007",
	"Tyche_Cube_008",
	"Tyche_Cube_009",
	"Tyche_bsp_model_0_014",
	"Tyro_storage_groupmesh_22666",
	"Tyro_storage_groupmesh_22666_001",
	"Tyro_storage_groupmesh_22666_002",
	"Tyro_storage_groupmesh_22666_003",
	"Tyro_storage_groupmesh_22666_1",
	"overworld_Cube_000",
	"overworld_Cube_001",
	"overworld_Cube_002",
	"overworld_Cube_003",
	"overworld_Cube_004",
	"overworld_Cube_005",
	"overworld_Cube_006",
	"overworld_Cube_007",
	"overworld_Cube_008",
	"overworld_Cube_009",
	"overworld_Cube_010",
	"overworld_Cube_011",
	"overworld_Cube_012",
	"overworld_Cube_013",
	"overworld_Cube_014",
	"overworld_Cube_015",
	"overworld_Cube_016",
	"overworld_Cube_017",
	"overworld_Cube_018",
	"overworld_Cube_019",
	"overworld_Cube_020",
	"overworld_Cube_021",
	"overworld_Cube_022",
	"overworld_Cube_023",
	"overworld_Cube_024",
	"overworld_Cube_025",
	"overworld_Cube_026",
	"overworld_Cube_027",
	"overworld_Cube_028",
	"overworld_Cube_029",
	"overworld_Cube_030",
	"overworld_Cube_031",
	"overworld_Cube_032",
	"overworld_Cube_033",
	"overworld_Cube_034",
	"overworld_Cube_035",
	"overworld_Cube_036",
	"overworld_Cube_037",
	"overworld_Cube_038",
	"overworld_Cube_039",
	"overworld_Cube_040",
	"overworld_Cube_041",
	"overworld_Cube_042",
	"overworld_Cube_043",
	"overworld_Cube_044",
	"overworld_Pyramid",
	"overworld_water",
	0,
};


const char* AssetLookup::Animation::values[] =
{
	"assets/awk_dash.anm",
	"assets/awk_fly.anm",
	"assets/character_aim.anm",
	"assets/character_climb_down.anm",
	"assets/character_climb_up.anm",
	"assets/character_fall.anm",
	"assets/character_fire.anm",
	"assets/character_hang.anm",
	"assets/character_idle.anm",
	"assets/character_interact.anm",
	"assets/character_jump1.anm",
	"assets/character_land.anm",
	"assets/character_land_hard.anm",
	"assets/character_mantle.anm",
	"assets/character_melee.anm",
	"assets/character_pickup.anm",
	"assets/character_roll.anm",
	"assets/character_run.anm",
	"assets/character_run_backward.anm",
	"assets/character_run_left.anm",
	"assets/character_run_right.anm",
	"assets/character_slide.anm",
	"assets/character_slide_end.anm",
	"assets/character_terminal_enter.anm",
	"assets/character_terminal_exit.anm",
	"assets/character_top_out.anm",
	"assets/character_walk.anm",
	"assets/character_walk_backward.anm",
	"assets/character_walk_left.anm",
	"assets/character_walk_right.anm",
	"assets/character_wall_run_left.anm",
	"assets/character_wall_run_right.anm",
	"assets/character_wall_run_straight.anm",
	"assets/hobo_idle.anm",
	"assets/interactable_disabled.anm",
	"assets/interactable_enabled.anm",
	"assets/interactable_interact.anm",
	"assets/interactable_interact_disable.anm",
	"assets/locke_gesture_both_arms.anm",
	"assets/locke_gesture_one_hand.anm",
	"assets/locke_gesture_one_hand_short.anm",
	"assets/locke_idle.anm",
	"assets/locke_shift_weight.anm",
	"assets/sailor_close_door.anm",
	"assets/sailor_talk.anm",
	"assets/sailor_wait.anm",
	"assets/terminal_close.anm",
	"assets/terminal_open.anm",
	"assets/terminal_opened.anm",
	"assets/tram_doors_close.anm",
	"assets/tram_doors_open.anm",
	"assets/tram_doors_opened.anm",
	0,
};


const char* AssetLookup::Animation::names[] =
{
	"awk_dash",
	"awk_fly",
	"character_aim",
	"character_climb_down",
	"character_climb_up",
	"character_fall",
	"character_fire",
	"character_hang",
	"character_idle",
	"character_interact",
	"character_jump1",
	"character_land",
	"character_land_hard",
	"character_mantle",
	"character_melee",
	"character_pickup",
	"character_roll",
	"character_run",
	"character_run_backward",
	"character_run_left",
	"character_run_right",
	"character_slide",
	"character_slide_end",
	"character_terminal_enter",
	"character_terminal_exit",
	"character_top_out",
	"character_walk",
	"character_walk_backward",
	"character_walk_left",
	"character_walk_right",
	"character_wall_run_left",
	"character_wall_run_right",
	"character_wall_run_straight",
	"hobo_idle",
	"interactable_disabled",
	"interactable_enabled",
	"interactable_interact",
	"interactable_interact_disable",
	"locke_gesture_both_arms",
	"locke_gesture_one_hand",
	"locke_gesture_one_hand_short",
	"locke_idle",
	"locke_shift_weight",
	"sailor_close_door",
	"sailor_talk",
	"sailor_wait",
	"terminal_close",
	"terminal_open",
	"terminal_opened",
	"tram_doors_close",
	"tram_doors_open",
	"tram_doors_opened",
	0,
};


const char* AssetLookup::Armature::values[] =
{
	"assets/awk.arm",
	"assets/character.arm",
	"assets/hobo.arm",
	"assets/interactable.arm",
	"assets/locke.arm",
	"assets/meursault.arm",
	"assets/parkour.arm",
	"assets/parkour_headless.arm",
	"assets/sailor.arm",
	"assets/seven.arm",
	"assets/terminal.arm",
	"assets/tram_doors.arm",
	0,
};


const char* AssetLookup::Armature::names[] =
{
	"awk",
	"character",
	"hobo",
	"interactable",
	"locke",
	"meursault",
	"parkour",
	"parkour_headless",
	"sailor",
	"seven",
	"terminal",
	"tram_doors",
	0,
};


const char* AssetLookup::Texture::values[] =
{
	"assets/blank.png",
	"assets/flare.png",
	"assets/noise.png",
	"assets/skybox_horizon.png",
	"assets/water_normal.png",
	0,
};


const char* AssetLookup::Texture::names[] =
{
	"blank",
	"flare",
	"noise",
	"skybox_horizon",
	"water_normal",
	0,
};


const char* AssetLookup::Soundbank::values[] =
{
	"assets/Init.bnk",
	"assets/SOUNDBANK.bnk",
	0,
};


const char* AssetLookup::Soundbank::names[] =
{
	"Init",
	"SOUNDBANK",
	0,
};


const char* AssetLookup::Shader::values[] =
{
	"assets/shader/armature.glsl",
	"assets/shader/blit.glsl",
	"assets/shader/blit_depth.glsl",
	"assets/shader/bloom_downsample.glsl",
	"assets/shader/blur.glsl",
	"assets/shader/composite.glsl",
	"assets/shader/culled.glsl",
	"assets/shader/debug_depth.glsl",
	"assets/shader/downsample.glsl",
	"assets/shader/flat.glsl",
	"assets/shader/flat_clipped.glsl",
	"assets/shader/flat_instanced.glsl",
	"assets/shader/flat_texture.glsl",
	"assets/shader/fresnel.glsl",
	"assets/shader/global_light.glsl",
	"assets/shader/particle_eased.glsl",
	"assets/shader/particle_spark.glsl",
	"assets/shader/particle_standard.glsl",
	"assets/shader/particle_textured.glsl",
	"assets/shader/point_light.glsl",
	"assets/shader/scan_lines.glsl",
	"assets/shader/sky_decal.glsl",
	"assets/shader/skybox.glsl",
	"assets/shader/spot_light.glsl",
	"assets/shader/ssao.glsl",
	"assets/shader/ssao_blur.glsl",
	"assets/shader/ssao_downsample.glsl",
	"assets/shader/standard.glsl",
	"assets/shader/standard_flat.glsl",
	"assets/shader/standard_instanced.glsl",
	"assets/shader/ui.glsl",
	"assets/shader/ui_texture.glsl",
	"assets/shader/underwater.glsl",
	"assets/shader/water.glsl",
	0,
};


const char* AssetLookup::Shader::names[] =
{
	"armature",
	"blit",
	"blit_depth",
	"bloom_downsample",
	"blur",
	"composite",
	"culled",
	"debug_depth",
	"downsample",
	"flat",
	"flat_clipped",
	"flat_instanced",
	"flat_texture",
	"fresnel",
	"global_light",
	"particle_eased",
	"particle_spark",
	"particle_standard",
	"particle_textured",
	"point_light",
	"scan_lines",
	"sky_decal",
	"skybox",
	"spot_light",
	"ssao",
	"ssao_blur",
	"ssao_downsample",
	"standard",
	"standard_flat",
	"standard_instanced",
	"ui",
	"ui_texture",
	"underwater",
	"water",
	0,
};


const char* AssetLookup::Uniform::names[] =
{
	"ambient_color",
	"bones",
	"buffer_size",
	"color_buffer",
	"cull_behind_wall",
	"cull_center",
	"cull_radius",
	"depth_buffer",
	"detail_light_vp",
	"detail_shadow_map",
	"diffuse_color",
	"diffuse_map",
	"displacement",
	"far_plane",
	"fog",
	"fog_extent",
	"fog_start",
	"frustum",
	"gravity",
	"inv_buffer_size",
	"inv_uv_scale",
	"lifetime",
	"light_color",
	"light_direction",
	"light_fov_dot",
	"light_pos",
	"light_radius",
	"light_vp",
	"lighting_buffer",
	"mv",
	"mvp",
	"noise_sampler",
	"normal_buffer",
	"normal_map",
	"p",
	"plane",
	"player_light",
	"range",
	"range_center",
	"scan_line_interval",
	"shadow_map",
	"size",
	"ssao_buffer",
	"time",
	"type",
	"uv_offset",
	"uv_scale",
	"v",
	"viewport_scale",
	"vp",
	"wall_normal",
	0,
};


const char* AssetLookup::Font::values[] =
{
	"assets/lowpoly.fnt",
	"assets/pt_sans.fnt",
	0,
};


const char* AssetLookup::Font::names[] =
{
	"lowpoly",
	"pt_sans",
	0,
};


const char* AssetLookup::Level::values[] =
{
	"assets/lvl/Dock.lvl",
	"assets/lvl/Ioke.lvl",
	"assets/lvl/Isthmus.lvl",
	"assets/lvl/Medias_Res.lvl",
	"assets/lvl/Moros.lvl",
	"assets/lvl/Pistis.lvl",
	"assets/lvl/Ponos.lvl",
	"assets/lvl/Port_District.lvl",
	"assets/lvl/Proci.lvl",
	"assets/lvl/Qualia.lvl",
	"assets/lvl/Tyche.lvl",
	"assets/lvl/Tyro.lvl",
	"assets/lvl/overworld.lvl",
	0,
};


const char* AssetLookup::Level::names[] =
{
	"Dock",
	"Ioke",
	"Isthmus",
	"Medias Res",
	"Moros",
	"Pistis",
	"Ponos",
	"Port District",
	"Proci",
	"Qualia",
	"Tyche",
	"Tyro",
	"overworld",
	0,
};


const char* AssetLookup::NavMesh::values[] =
{
	"assets/lvl/Dock.nav",
	"assets/lvl/Ioke.nav",
	"assets/lvl/Isthmus.nav",
	"assets/lvl/Medias_Res.nav",
	"assets/lvl/Moros.nav",
	"assets/lvl/Pistis.nav",
	"assets/lvl/Ponos.nav",
	"assets/lvl/Port_District.nav",
	"assets/lvl/Proci.nav",
	"assets/lvl/Qualia.nav",
	"assets/lvl/Tyche.nav",
	"assets/lvl/Tyro.nav",
	"assets/lvl/overworld.nav",
	0,
};


const char* AssetLookup::NavMesh::names[] =
{
	"Dock",
	"Ioke",
	"Isthmus",
	"Medias Res",
	"Moros",
	"Pistis",
	"Ponos",
	"Port District",
	"Proci",
	"Qualia",
	"Tyche",
	"Tyro",
	"overworld",
	0,
};


const char* AssetLookup::String::names[] =
{
	"ability_spawn_cost",
	"alarm",
	"attack",
	"back",
	"battery_captured",
	"binding",
	"bolter",
	"btn_A",
	"btn_B",
	"btn_Back",
	"btn_LeftClick",
	"btn_LeftShoulder",
	"btn_LeftTrigger",
	"btn_None",
	"btn_RightClick",
	"btn_RightShoulder",
	"btn_RightTrigger",
	"btn_Start",
	"btn_X",
	"btn_Y",
	"buy_period",
	"buying",
	"canceling_capture",
	"capture_bonus",
	"close",
	"confirm_capture",
	"confirm_defend",
	"confirm_quit",
	"confirm_skip_tutorial",
	"confirm_spend",
	"connecting",
	"connection_failed",
	"contacting_master",
	"containment_field",
	"containment_field_destroyed",
	"control_point_captured",
	"control_point_lost",
	"danger",
	"deaths",
	"decoy",
	"defeat",
	"defend",
	"deploy_timer",
	"deploying",
	"description_bolter",
	"description_containment_field",
	"description_decoy",
	"description_grenade",
	"description_minion",
	"description_rocket",
	"description_sensor",
	"description_sniper",
	"draw",
	"drones",
	"drones_remaining",
	"enemy_tracking",
	"energy",
	"energy_generation",
	"energy_generation_group",
	"energy_generation_total",
	"ephyra",
	"error_inside_tram",
	"error_locked_zone",
	"error_zone_under_attack",
	"exit",
	"forfeit_network_error",
	"forfeit_opponent_quit",
	"grenade",
	"group_required",
	"hack_complete",
	"hack_kits",
	"hacking",
	"hobo1",
	"hobo2",
	"hobo3",
	"hobo4",
	"hobo5",
	"in_group_queue",
	"incoming_message",
	"insufficient_resource",
	"invert_y",
	"ivory_ad1",
	"ivory_ad2",
	"ivory_ad3",
	"key_A",
	"key_ACBack",
	"key_ACBookmarks",
	"key_ACForward",
	"key_ACHome",
	"key_ACRefresh",
	"key_ACSearch",
	"key_ACStop",
	"key_Again",
	"key_AltErase",
	"key_Apostrophe",
	"key_Application",
	"key_AudioMute",
	"key_AudioNext",
	"key_AudioPlay",
	"key_AudioPrev",
	"key_AudioStop",
	"key_B",
	"key_Backslash",
	"key_Backspace",
	"key_BrightnessDown",
	"key_BrightnessUp",
	"key_C",
	"key_Calculator",
	"key_Cancel",
	"key_Capslock",
	"key_Clear",
	"key_ClearAgain",
	"key_Comma",
	"key_Computer",
	"key_Copy",
	"key_CrSel",
	"key_CurrencySubunit",
	"key_CurrencyUnit",
	"key_Cut",
	"key_D",
	"key_D0",
	"key_D1",
	"key_D2",
	"key_D3",
	"key_D4",
	"key_D5",
	"key_D6",
	"key_D7",
	"key_D8",
	"key_D9",
	"key_DecimalSeparator",
	"key_Delete",
	"key_DisplaySwitch",
	"key_Down",
	"key_E",
	"key_Eject",
	"key_End",
	"key_Equals",
	"key_Escape",
	"key_ExSel",
	"key_Execute",
	"key_F",
	"key_F1",
	"key_F10",
	"key_F11",
	"key_F12",
	"key_F13",
	"key_F14",
	"key_F15",
	"key_F16",
	"key_F17",
	"key_F18",
	"key_F19",
	"key_F2",
	"key_F20",
	"key_F21",
	"key_F22",
	"key_F23",
	"key_F24",
	"key_F3",
	"key_F4",
	"key_F5",
	"key_F6",
	"key_F7",
	"key_F8",
	"key_F9",
	"key_Find",
	"key_G",
	"key_Grave",
	"key_H",
	"key_Help",
	"key_Home",
	"key_I",
	"key_Insert",
	"key_J",
	"key_K",
	"key_KbDillumDown",
	"key_KbDillumToggle",
	"key_KbDillumUp",
	"key_Keypad0",
	"key_Keypad00",
	"key_Keypad000",
	"key_Keypad1",
	"key_Keypad2",
	"key_Keypad3",
	"key_Keypad4",
	"key_Keypad5",
	"key_Keypad6",
	"key_Keypad7",
	"key_Keypad8",
	"key_Keypad9",
	"key_KeypadA",
	"key_KeypadAmpersand",
	"key_KeypadAt",
	"key_KeypadB",
	"key_KeypadBackspace",
	"key_KeypadBinary",
	"key_KeypadC",
	"key_KeypadClear",
	"key_KeypadClearEntry",
	"key_KeypadColon",
	"key_KeypadComma",
	"key_KeypadD",
	"key_KeypadDblAmpersand",
	"key_KeypadDblVerticalBar",
	"key_KeypadDecimal",
	"key_KeypadDivide",
	"key_KeypadE",
	"key_KeypadEnter",
	"key_KeypadEquals",
	"key_KeypadEqualsAS400",
	"key_KeypadExclam",
	"key_KeypadF",
	"key_KeypadGreater",
	"key_KeypadHash",
	"key_KeypadHexadecimal",
	"key_KeypadLeftBrace",
	"key_KeypadLeftParen",
	"key_KeypadLess",
	"key_KeypadMemAdd",
	"key_KeypadMemClear",
	"key_KeypadMemDivide",
	"key_KeypadMemMultiply",
	"key_KeypadMemRecall",
	"key_KeypadMemStore",
	"key_KeypadMemSubtract",
	"key_KeypadMinus",
	"key_KeypadMultiply",
	"key_KeypadOctal",
	"key_KeypadPercent",
	"key_KeypadPeriod",
	"key_KeypadPlus",
	"key_KeypadPlusMinus",
	"key_KeypadPower",
	"key_KeypadRightBrace",
	"key_KeypadRightParen",
	"key_KeypadSpace",
	"key_KeypadTab",
	"key_KeypadVerticalBar",
	"key_KeypadXor",
	"key_L",
	"key_LAlt",
	"key_LCtrl",
	"key_LGui",
	"key_LShift",
	"key_Left",
	"key_LeftBracket",
	"key_M",
	"key_Mail",
	"key_MediaSelect",
	"key_Menu",
	"key_Minus",
	"key_Mode",
	"key_MouseLeft",
	"key_MouseMiddle",
	"key_MouseRight",
	"key_Mute",
	"key_N",
	"key_None",
	"key_NumlockClear",
	"key_O",
	"key_Oper",
	"key_Out",
	"key_P",
	"key_PageDown",
	"key_PageUp",
	"key_Paste",
	"key_Pause",
	"key_Period",
	"key_Power",
	"key_Printscreen",
	"key_Prior",
	"key_Q",
	"key_R",
	"key_RAlt",
	"key_RCtrl",
	"key_RGui",
	"key_RShift",
	"key_Return",
	"key_Return2",
	"key_Right",
	"key_RightBracket",
	"key_S",
	"key_Scrolllock",
	"key_Select",
	"key_Semicolon",
	"key_Separator",
	"key_Slash",
	"key_Sleep",
	"key_Space",
	"key_Stop",
	"key_SysReq",
	"key_T",
	"key_Tab",
	"key_ThousandsSeparator",
	"key_U",
	"key_Undo",
	"key_Up",
	"key_V",
	"key_VolumeDown",
	"key_VolumeUp",
	"key_W",
	"key_Www",
	"key_X",
	"key_Y",
	"key_Z",
	"kills",
	"left_joystick",
	"leftover_energy",
	"loading",
	"locke1a",
	"locke1b",
	"locke2a",
	"locke2b",
	"locke2c",
	"locke3a",
	"locke3b",
	"locke3c",
	"locke3d",
	"locke4a",
	"locke4b",
	"locke4c",
	"locke5a",
	"locke5b",
	"locke5c",
	"locke5d",
	"locke5e",
	"locke6a",
	"locke6b",
	"locke6c",
	"locke7a",
	"locke7b",
	"locke7c",
	"locke7d",
	"losing",
	"main_menu",
	"master_timeout",
	"match_searching",
	"match_starting",
	"member_of_group",
	"minion",
	"minion_killed",
	"music",
	"need_upgrade",
	"no",
	"no_effect",
	"none",
	"online",
	"options",
	"play",
	"player",
	"player_ascended",
	"player_joined",
	"player_killed",
	"player_left",
	"prompt_accept",
	"prompt_back",
	"prompt_buy",
	"prompt_buy_more",
	"prompt_cancel",
	"prompt_cancel_ability",
	"prompt_cancel_hack",
	"prompt_capture",
	"prompt_defend",
	"prompt_deploy",
	"prompt_hack",
	"prompt_interact",
	"prompt_splitscreen",
	"prompt_splitscreen_ready",
	"prompt_sudoku_place",
	"prompt_upgrade",
	"prompt_zone_defend",
	"quit",
	"resource_collected",
	"right_joystick",
	"rocket",
	"rocket_destroyed",
	"rocket_incoming",
	"sailor_come_here",
	"sailor_speech_1",
	"sailor_speech_2",
	"sensitivity",
	"sensor",
	"sensor_destroyed",
	"sfx",
	"shield",
	"shield_down",
	"sniper",
	"spectating",
	"splitscreen",
	"starting_capture",
	"stealth",
	"tab_inventory",
	"tab_map",
	"tab_messages",
	"target_shield_down",
	"team_a",
	"team_b",
	"team_c",
	"team_d",
	"terminal_locked",
	"timer",
	"tip",
	"tip_0",
	"tip_1",
	"tip_10",
	"tip_11",
	"tip_2",
	"tip_3",
	"tip_4",
	"tip_5",
	"tip_7",
	"tip_8",
	"tip_9",
	"tut_ability",
	"tut_capture",
	"tut_climb_jump",
	"tut_slide",
	"tut_start",
	"tut_upgrade",
	"tut_wallrun",
	"unknown",
	"upgrade_description",
	"upgrade_notification",
	"upgrading",
	"victory",
	"waiting",
	"wu_gang",
	"yes",
	"zone_already_captured",
	"zone_defense_expired",
	"zone_unlocked",
	"zones_captured",
	"zones_hostile",
	"zones_locked",
	"zones_under_attack",
	0,
};


}