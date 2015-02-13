#include "rgl_addresses.h"

using namespace rgl;

#if defined WARBAND_VANILLA
//unsigned int addresses::New = 0x00682814;
unsigned int addresses::New = 0x0062A506;
//unsigned int addresses::Delete = 0x00682194;
unsigned int addresses::Delete = 0x00629D29;

//unsigned int addresses::window_manager_DisplayMessage = 0x00490700;
unsigned int addresses::window_manager_DisplayMessage = 0x00461320;

//unsigned int addresses::mesh_CreateVertexAnimMorph = 0x00556420;
//unsigned int addresses::mesh_CreateCopy = 0x00422B30;
//unsigned int addresses::mesh_CreateUniqueVertexData = 0x00422DB0;
unsigned int addresses::mesh_CreateVertexAnimMorph = 0x0050DD00;
unsigned int addresses::mesh_CreateCopy = 0x0041B0D0;
unsigned int addresses::mesh_CreateUniqueVertexData = 0x0041B350;

//unsigned int addresses::skeleton_GetBonePosition = 0x004E35B0;
unsigned int addresses::skeleton_GetBonePosition = 0x004A7A80;

//unsigned int addresses::scene_GetGroundData = 0x00437660;
unsigned int addresses::scene_GetGroundData = 0x00428DD0;

//unsigned int addresses::CheckIntersection = 0x00417CF0;
unsigned int addresses::CheckIntersection = 0x00413E60;

//unsigned int addresses::scene_GetBodyPartsInPath = 0x00448740;
unsigned int addresses::scene_GetBodyPartsInPath = 0x00434AD0;

//unsigned int addresses::capsule_Ctor = 0x00447E00;
unsigned int addresses::capsule_Ctor = 0x00434180;
#elif defined WARBAND_STEAM
unsigned int addresses::New = 0x00678FE4;
unsigned int addresses::Delete = 0x00678964;

unsigned int addresses::window_manager_DisplayMessage = 0x00490700;

unsigned int addresses::mesh_CreateVertexAnimMorph = 0x0055A1C0;
unsigned int addresses::mesh_CreateCopy = 0x00422B30;
unsigned int addresses::mesh_CreateUniqueVertexData = 0x00422DB0;

unsigned int addresses::skeleton_GetBonePosition = 0x004E6FD0;

unsigned int addresses::scene_GetGroundData = 0x00437580;

unsigned int addresses::CheckIntersection = 0x00417CF0;

unsigned int addresses::scene_GetBodyPartsInPath = 0x00448720;

unsigned int addresses::capsule_Ctor = 0x00447DE0;
#elif defined WARBAND_DEDICATED
//unsigned int addresses::New = 0x004F1C0D;
unsigned int addresses::New = 0x004F8AED;
//unsigned int addresses::Delete = 0x004F1B0D;
unsigned int addresses::Delete = 0x004F89ED;

unsigned int addresses::window_manager_DisplayMessage = 0;

unsigned int addresses::mesh_CreateVertexAnimMorph = 0;
unsigned int addresses::mesh_CreateCopy = 0;
unsigned int addresses::mesh_CreateUniqueVertexData = 0;

//unsigned int addresses::skeleton_GetBonePosition = 0x00456740;
unsigned int addresses::skeleton_GetBonePosition = 0x00457460;

//unsigned int addresses::scene_GetGroundData = 0x0040F6A0;
unsigned int addresses::scene_GetGroundData = 0x0040FDF0;

unsigned int addresses::CheckIntersection = 0x004068A0;

//unsigned int addresses::scene_GetBodyPartsInPath = 0x0044F270;
unsigned int addresses::scene_GetBodyPartsInPath = 0x0044FE70;

//unsigned int addresses::capsule_Ctor = 0x0044E720;
unsigned int addresses::capsule_Ctor = 0x0044F310;
#endif
