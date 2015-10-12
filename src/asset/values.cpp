#include "lookup.h"

namespace VI
{ 


const char* AssetLookup::Mesh::values[] =
{
	"assets/Alpha.msh",
	"assets/awk.msh",
	"assets/lvl/city1.msh",
	"assets/lvl/city2.msh",
	"assets/lvl/city3_city3.msh",
	"assets/lvl/city3_city3_1.msh",
	"assets/lvl/city4_elevator.msh",
	"assets/lvl/city4_shell.msh",
	"assets/lvl/city4_shell_1.msh",
	"assets/cone.msh",
	"assets/cube.msh",
	"assets/skybox.msh",
	0,
};


const char* AssetLookup::Mesh::names[] =
{
	"Alpha",
	"awk",
	"city1",
	"city2",
	"city3_city3",
	"city3_city3_1",
	"city4_elevator",
	"city4_shell",
	"city4_shell_1",
	"cone",
	"cube",
	"skybox",
	0,
};


const char* AssetLookup::Animation::values[] =
{
	"assets/idle.anm",
	"assets/walk.anm",
	0,
};


const char* AssetLookup::Animation::names[] =
{
	"idle",
	"walk",
	0,
};


const char* AssetLookup::Armature::values[] =
{
	"assets/Alpha.arm",
	0,
};


const char* AssetLookup::Armature::names[] =
{
	"Alpha",
	0,
};


const char* AssetLookup::Texture::values[] =
{
	"assets/skybox_horizon.png",
	"assets/test.png",
	0,
};


const char* AssetLookup::Texture::names[] =
{
	"skybox_horizon",
	"test",
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
	"assets/Armature.glsl",
	"assets/Standard.glsl",
	"assets/UI.glsl",
	"assets/flat.glsl",
	"assets/flat_texture.glsl",
	0,
};


const char* AssetLookup::Shader::names[] =
{
	"Armature",
	"Standard",
	"UI",
	"flat",
	"flat_texture",
	0,
};


const char* AssetLookup::Uniform::values[] =
{
	"ambient_color",
	"bones",
	"diffuse_color",
	"diffuse_map",
	"light_color",
	"light_position",
	"light_radius",
	"m",
	"mvp",
	0,
};


const char* AssetLookup::Uniform::names[] =
{
	"ambient_color",
	"bones",
	"diffuse_color",
	"diffuse_map",
	"light_color",
	"light_position",
	"light_radius",
	"m",
	"mvp",
	0,
};


const char* AssetLookup::Font::values[] =
{
	"assets/SegoeUISymbol.fnt",
	"assets/lowpoly.fnt",
	0,
};


const char* AssetLookup::Font::names[] =
{
	"SegoeUISymbol",
	"lowpoly",
	0,
};


const char* AssetLookup::Level::values[] =
{
	"assets/lvl/city1.lvl",
	"assets/lvl/city2.lvl",
	"assets/lvl/city3.lvl",
	"assets/lvl/city4.lvl",
	0,
};


const char* AssetLookup::Level::names[] =
{
	"city1",
	"city2",
	"city3",
	"city4",
	0,
};


const char* AssetLookup::NavMesh::values[] =
{
	"assets/lvl/city1.nav",
	"assets/lvl/city2.nav",
	"assets/lvl/city3.nav",
	"assets/lvl/city4.nav",
	0,
};


const char* AssetLookup::NavMesh::names[] =
{
	"city1",
	"city2",
	"city3",
	"city4",
	0,
};


}