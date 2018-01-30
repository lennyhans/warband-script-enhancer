#include "wb_addresses.h"

using namespace wb;

#if defined WARBAND_VANILLA
//unsigned int addresses::operation_Execute_jumptable = 0x0057A510;
//unsigned int addresses::operation_Execute_entry = 0x0057A47C;
//unsigned int addresses::operation_Execute_exit_1 = 0x0057A4A9;
unsigned int addresses::operation_Execute_jumptable = 0x00535418;
unsigned int addresses::operation_Execute_entry = 0x00535384;
unsigned int addresses::operation_Execute_exit_1 = 0x005353B1;
unsigned int addresses::operation_Execute_exit_2 = operation_Execute_entry + 8;

//unsigned int addresses::network_server_ReceiveTeamChatEvent_entry = 0x004C3910;
unsigned int addresses::network_server_ReceiveTeamChatEvent_entry = 0x0048BB10;
unsigned int addresses::network_server_ReceiveTeamChatEvent_exit = network_server_ReceiveTeamChatEvent_entry + 6;

//unsigned int addresses::network_server_ReceiveChatEvent_entry = 0x004C3BA0;
unsigned int addresses::network_server_ReceiveChatEvent_entry = 0x0048BDA0;
unsigned int addresses::network_server_ReceiveChatEvent_exit = network_server_ReceiveChatEvent_entry + 6;

unsigned int addresses::activate_entry = 0x005A68F2;

//unsigned int addresses::ReadModuleFiles_entry = 0x006669E1;
unsigned int addresses::ReadModuleFiles_entry = 0x00614AE1;

//unsigned int addresses::game_ReadModuleFiles_entry = 0x006688CE;
unsigned int addresses::game_ReadModuleFiles_entry = 0x006169FE;

unsigned int addresses::ParseConsoleCommand_entry = 0;
unsigned int addresses::ParseConsoleCommand_exit_1 = 0;
unsigned int addresses::ParseConsoleCommand_exit_2 = 0;

unsigned int addresses::ExecuteConsoleCommand_entry = 0;

//unsigned int addresses::Save_entry = 0x00606612;
unsigned int addresses::Save_entry = 0x0054D716;

unsigned int addresses::LoadSave_entry = 0x00616E4C;
unsigned int addresses::LoadSave_exit = LoadSave_entry + 5;

//unsigned int addresses::CheckUrlReplies_entry = 0x005B293C;
//unsigned int addresses::CheckUrlReplies_exit = CheckUrlReplies_entry + 6;
unsigned int addresses::CheckUrlReplies_entry = 0x0056F49E;
unsigned int addresses::CheckUrlReplies_exit = CheckUrlReplies_entry + 5;
unsigned int addresses::CheckUrlReplies_call = 0x0046A180;

//unsigned int addresses::network_client_ReceiveMessage_entry = 0x0049F8A3;
//unsigned int addresses::network_client_ReceiveMessage_exit_1 = 0x004A38F9;
unsigned int addresses::network_client_ReceiveMessage_entry = 0x0046E6B3;
unsigned int addresses::network_client_ReceiveMessage_exit_1 = 0x00472659;
unsigned int addresses::network_client_ReceiveMessage_exit_2 = network_client_ReceiveMessage_entry + 6;

//unsigned int addresses::network_server_ReceiveMessage_entry = 0x004C4B41;
//unsigned int addresses::network_server_ReceiveMessage_exit_1 = 0x004C61D8;
unsigned int addresses::network_server_ReceiveMessage_entry = 0x0048CC31;
unsigned int addresses::network_server_ReceiveMessage_exit_1 = 0x0048E2A8;
unsigned int addresses::network_server_ReceiveMessage_exit_2 = network_server_ReceiveMessage_entry + 6;

unsigned int addresses::network_server_ReceiveMessageServerJoinRequest_entry = 0x0048DBF2;
unsigned int addresses::network_server_ReceiveMessageServerJoinRequest_exit = network_server_ReceiveMessageServerJoinRequest_entry + 8;

//unsigned int addresses::agent_ApplyAttackRecord_entry = 0x004F8850;
//unsigned int addresses::agent_ApplyAttackRecord_exit = 0x004F8870;
unsigned int addresses::agent_ApplyAttackRecord_entry = 0x004BC0B4;
unsigned int addresses::agent_ApplyAttackRecord_exit = 0x004BC0D4;

//unsigned int addresses::CreateMbnetHost_entry = 0x004CE215;
//unsigned int addresses::DestroyMbnetHost_entry = 0x004CE243;
unsigned int addresses::CreateMbnetHost_entry = 0x00495B85;
unsigned int addresses::DestroyMbnetHost_entry = 0x00495BB3;

unsigned int addresses::XmlGetServerInfo = 0x0047D0A0;
		
//unsigned int addresses::mission_CheckCollision_entry = 0x005206F1;
unsigned int addresses::mission_CheckCollision_entry = 0x004E3191;
unsigned int addresses::mission_CheckCollision_exit = mission_CheckCollision_entry + 15;
		
//unsigned int addresses::agent_SetGroundQuad_entry = 0x004F5D5E;
unsigned int addresses::agent_SetGroundQuad_entry = 0x004B991E;
unsigned int addresses::agent_SetGroundQuad_exit = agent_SetGroundQuad_entry + 6;

//unsigned int addresses::agent_ReceiveShieldHit_entry = 0x00509A63;
unsigned int addresses::agent_ReceiveShieldHit_entry = 0x004CC1B1;
unsigned int addresses::agent_ReceiveShieldHit_exit = agent_ReceiveShieldHit_entry + 6;

//unsigned int addresses::mission_SpawnMissile_entry = 0x0052C26F;
unsigned int addresses::mission_SpawnMissile_entry = 0x004EEEF7;
unsigned int addresses::mission_SpawnMissile_exit = mission_SpawnMissile_entry + 5;

//unsigned int addresses::missile_Dive_entry = 0x0051D9D1;
//unsigned int addresses::missile_Dive_exit = 0x0051DA15;
unsigned int addresses::missile_Dive_entry = 0x004E0091;
unsigned int addresses::missile_Dive_exit = 0x004E00E1;

//unsigned int addresses::network_manager_PopulatePlayerInfoServerEvent_entry = 0x004B43DD;
unsigned int addresses::network_manager_PopulatePlayerInfoServerEvent_entry = 0x0047E67D;
unsigned int addresses::network_manager_PopulatePlayerInfoServerEvent_exit = network_manager_PopulatePlayerInfoServerEvent_entry + 8;

unsigned int addresses::network_manager_PopulatePlayerInfoClientEvent_entry = 0x004829A8;
unsigned int addresses::network_manager_PopulatePlayerInfoClientEvent_exit = network_manager_PopulatePlayerInfoClientEvent_entry + 8;

//unsigned int addresses::network_manager_PopulateServerOptionsServerEvent_entry = 0x004B40D0;
unsigned int addresses::network_manager_PopulateServerOptionsServerEvent_entry = 0x0047E370;

unsigned int addresses::network_manager_GoldNumBits_entry = 0x00813B04;

//unsigned int addresses::config_manager_ChooseNumberOfEffectiveCorpses_entry = 0x00405360;
unsigned int addresses::config_manager_ChooseNumberOfEffectiveCorpses_entry = 0x00405540;
unsigned int addresses::config_manager_ChooseNumberOfEffectiveCorpses_exit = config_manager_ChooseNumberOfEffectiveCorpses_entry + 5;

//unsigned int addresses::UpdateHorseAgentEntityBody_entry = 0x00530D21;
//unsigned int addresses::UpdateHorseAgentEntityBody_exit = UpdateHorseAgentEntityBody_entry + 7;
unsigned int addresses::UpdateHorseAgentEntityBody_entry = 0x004F37C9;
unsigned int addresses::UpdateHorseAgentEntityBody_exit = UpdateHorseAgentEntityBody_entry + 6;

//unsigned int addresses::tactical_window_ShowUseTooltip_entry = 0x005F4B86;
unsigned int addresses::tactical_window_ShowUseTooltip_entry = 0x005A4626;
unsigned int addresses::tactical_window_ShowUseTooltip_exit = tactical_window_ShowUseTooltip_entry + 7;

//unsigned int addresses::tactical_window_ShowCrosshair_entry = 0x005F5E26;
unsigned int addresses::tactical_window_ShowCrosshair_entry = 0x005A58C6;

//unsigned int addresses::mission_CheckHit_Human_entry = 0x0052732D;
//unsigned int addresses::mission_CheckHit_Human_exit_1 = 0x005291CB;
//unsigned int addresses::mission_CheckHit_Human_exit_2 = 0x0052738B;
unsigned int addresses::mission_CheckHit_Human_entry = 0x004EA648;
unsigned int addresses::mission_CheckHit_Human_exit_1 = 0x004EC568;
unsigned int addresses::mission_CheckHit_Human_exit_2 = 0x004EA6A7;

//unsigned int addresses::mission_CheckHit_Horse_entry = 0x00527974;
//unsigned int addresses::mission_CheckHit_Horse_exit_1 = 0x005279CB;
//unsigned int addresses::mission_CheckHit_Horse_exit_2 = 0x005279C0;
unsigned int addresses::mission_CheckHit_Horse_entry = 0x004EAC85;
unsigned int addresses::mission_CheckHit_Horse_exit_1 = 0x004EACDF;
unsigned int addresses::mission_CheckHit_Horse_exit_2 = 0x004EACD1;

//unsigned int addresses::mission_CheckHit_Prop_entry = 0x00526AEF;
//unsigned int addresses::mission_CheckHit_Prop_exit_1 = 0x00526CF7;
//unsigned int addresses::mission_CheckHit_Prop_exit_2 = 0x00526B15;
unsigned int addresses::mission_CheckHit_Prop_entry = 0x004E9DB3;
unsigned int addresses::mission_CheckHit_Prop_exit_1 = 0x004EA009;
unsigned int addresses::mission_CheckHit_Prop_exit_2 = 0x004E9DD9;

//unsigned int addresses::agent_HorseCharged_entry = 0x0050627A;
unsigned int addresses::agent_HorseCharged_entry = 0x004C8978;
unsigned int addresses::agent_HorseCharged_exit = agent_HorseCharged_entry + 5;

//unsigned int addresses::mission_ApplyBlow_entry = 0x005241E0;
unsigned int addresses::mission_ApplyBlow_entry = 0x004E7400;
unsigned int addresses::mission_ApplyBlow_exit = mission_ApplyBlow_entry + 5;

//unsigned int addresses::agent_GetScaleHuman_entry = 0x0055B53D;
unsigned int addresses::agent_GetScaleHuman_entry = 0x0051312D;
unsigned int addresses::agent_GetScaleHuman_exit = agent_GetScaleHuman_entry + 6;
//unsigned int addresses::agent_GetScaleHorse_entry = 0x0055B64D;
unsigned int addresses::agent_GetScaleHorse_entry = 0x0051323D;
unsigned int addresses::agent_GetScaleHorse_exit = agent_GetScaleHorse_entry + 6;

//unsigned int addresses::mission_object_Hit_entry = 0x0052977E;
unsigned int addresses::mission_object_Hit_entry = 0x004ECB7A;
unsigned int addresses::mission_object_Hit_exit = mission_object_Hit_entry + 6;

//unsigned int addresses::game_screen_OpenWindow_entry = 0x0058E7A0;
unsigned int addresses::game_screen_OpenWindow_entry = 0x0054AB90;

unsigned int addresses::game_screen_ProfileNumSkins_entry = 0x00611D2F;

unsigned int addresses::game_screen_NewProfileLoadSkinList_entry = 0x006124C4;
unsigned int addresses::game_screen_NewProfileLoadSkinList_exit = game_screen_NewProfileLoadSkinList_entry + 5;

unsigned int addresses::game_screen_NewProfileAllocateMemoryForSkins_entry = 0x0061231C;

unsigned int addresses::game_screen_EditProfileLoadSkinList_entry = 0x006126DF;
unsigned int addresses::game_screen_EditProfileLoadSkinList_exit = game_screen_EditProfileLoadSkinList_entry + 5;

unsigned int addresses::game_screen_EditProfileAllocateMemoryForSkins_entry = 0x00612508;

//unsigned int addresses::item_kind_TransformHoldPosition_entry = 0x004D4F10;
unsigned int addresses::item_kind_TransformHoldPosition_entry = 0x0049B3D0;

//unsigned int addresses::agent_CancelSwing_entry = 0x004F0D1F;
//unsigned int addresses::agent_CancelSwing_exit = 0x004F0D65;
unsigned int addresses::agent_CancelSwing_entry = 0x004B498F;
unsigned int addresses::agent_CancelSwing_exit = 0x004B49D5;

//unsigned int addresses::UpdateAgentEntityBody = 0x00530E58;
unsigned int addresses::UpdateAgentEntityBody = 0x0056FF70;
		
//unsigned int addresses::agent_DropItem_entry = 0x0050E296;
unsigned int addresses::agent_DropItem_entry = 0x004CF9A6;
unsigned int addresses::agent_DropItem_exit = agent_DropItem_entry + 6;

//unsigned int addresses::agent_StartReloading_entry = 0x0050AC78;
unsigned int addresses::agent_StartReloading_entry = 0x004CD436;
unsigned int addresses::agent_StartReloadingClient_entry = 0x004CD40C;
unsigned int addresses::agent_StartReloadingClient_exit = agent_StartReloadingClient_entry + 10;

//unsigned int addresses::agent_EndReloading_entry_1 = 0x0050B83E;
//unsigned int addresses::agent_EndReloading_entry_2 = 0x0050B7DA;
unsigned int addresses::agent_EndReloading_entry_1 = 0x004CE010;
unsigned int addresses::agent_EndReloading_entry_2 = 0x004CDFB5;

unsigned int addresses::item_Difficulty_entry = 0x004DC420;

unsigned int addresses::mission_object_WeaponKnockBack_entry = 0x004EC713;
unsigned int addresses::mission_object_WeaponKnockBack_exit = mission_object_WeaponKnockBack_entry + 5;

unsigned int addresses::item_kind_ShieldNoParry_entry = 0x004A3BBD;
unsigned int addresses::item_kind_ShieldNoParry_exit_1 = item_kind_ShieldNoParry_entry + 5;
unsigned int addresses::item_kind_ShieldNoParry_exit_2 = 0x004A3BD9;

unsigned int addresses::item_kind_ShieldNoParrySound_entry = 0x004EBA1C;
unsigned int addresses::item_kind_ShieldNoParrySound_exit_1 = item_kind_ShieldNoParrySound_entry + 8;
unsigned int addresses::item_kind_ShieldNoParrySound_exit_2 = 0x004EBB61;

unsigned int addresses::item_kind_ShieldNoParryDamage_entry = 0x004EB6CE;
unsigned int addresses::item_kind_ShieldNoParryDamage_exit_1 = item_kind_ShieldNoParryDamage_entry + 8;
unsigned int addresses::item_kind_ShieldNoParryDamage_exit_2 = 0x004EB9A3;

unsigned int addresses::item_kind_ShieldNoParryMissiles_entry = 0x004E77EF;
unsigned int addresses::item_kind_ShieldNoParryMissiles_exit_1 = item_kind_ShieldNoParryMissiles_entry + 8;
unsigned int addresses::item_kind_ShieldNoParryMissiles_exit_2 = 0x004E81F9;

unsigned int addresses::item_kind_ShieldNoParrySpeed_entry = 0x004A70E9;
unsigned int addresses::item_kind_ShieldNoParrySpeed_exit_1 = item_kind_ShieldNoParrySpeed_entry + 5;
unsigned int addresses::item_kind_ShieldNoParrySpeed_exit_2 = 0x004A70FD;

unsigned int addresses::item_kind_ShieldNoParryCarry_entry = 0x004EE680;
unsigned int addresses::item_kind_ShieldNoParryCarry_exit_1 = item_kind_ShieldNoParryCarry_entry + 9;
unsigned int addresses::item_kind_ShieldNoParryCarry_exit_2 = 0x004EE70C;

unsigned int addresses::item_kind_ShieldNoParryCouchedLance_entry = 0x004E84A0;
unsigned int addresses::item_kind_ShieldNoParryCouchedLance_exit_1 = item_kind_ShieldNoParryCouchedLance_entry + 9;
unsigned int addresses::item_kind_ShieldNoParryCouchedLance_exit_2 = item_kind_ShieldNoParryMissiles_exit_2;

unsigned int addresses::item_kind_DisableAgentSoundsHorseShort_entry = 0x004CB068;
unsigned int addresses::item_kind_DisableAgentSoundsHorseShort_exit_1 = item_kind_DisableAgentSoundsHorseShort_entry + 5;
unsigned int addresses::item_kind_DisableAgentSoundsHorseShort_exit_2 = 0x004CB099;

unsigned int addresses::agent_BlockedAttack_entry = 0x004EBC76;
unsigned int addresses::agent_BlockedAttack_exit = agent_BlockedAttack_entry + 8;

unsigned int addresses::agent_Turn_entry = 0x0049F1DC;
unsigned int addresses::agent_Turn_exit = agent_Turn_entry + 8;

unsigned int addresses::agent_BloodParticles_entry = 0x004A6C83;
unsigned int addresses::agent_BloodParticles_exit = agent_BloodParticles_entry + 59;

unsigned int addresses::fixBotsBlocking_entry = 0;

unsigned int addresses::makeScreenShot = 0x005B3490;

//unsigned int addresses::operation_Execute = 0x0055FF90;
unsigned int addresses::operation_Execute = 0x005179A0;

//unsigned int addresses::operation_manager_Execute = 0x0057CA40;
unsigned int addresses::operation_manager_Execute = 0x00537F20;

unsigned int addresses::operation_manager_StartProfilingBlock_entry = operation_manager_Execute;
unsigned int addresses::operation_manager_StartProfilingBlock_exit = operation_manager_StartProfilingBlock_entry + 6;
unsigned int addresses::operation_manager_StopProfilingBlock = 0x00538954;

//unsigned int addresses::basic_game_ParseString = 0x00517150;
unsigned int addresses::basic_game_ParseString = 0x004D9560;

//unsigned int addresses::particle_system_manager_Create = 0x00550EE0;
unsigned int addresses::particle_system_manager_Create = 0x0050A6C0;

//unsigned int addresses::DXUtil_Timer = 0x0040F660;
unsigned int addresses::DXUtil_Timer = 0x0040E730;

//unsigned int addresses::agent_SetAiBehavior = 0x0050EFC0;
unsigned int addresses::agent_SetAiBehavior = 0x004D06D0;

unsigned int addresses::temp_ban_time_dbl_ptr = 0x008140B0;

unsigned int addresses::write_to_rgl_log_file_handle_base_var = 0x00867564;
unsigned int addresses::write_to_rgl_log = 0x0063656E;
unsigned int addresses::write_to_rgl_log_exit = write_to_rgl_log + 5;

//unsigned int addresses::game_data_ptr = 0x0094F118;
unsigned int addresses::game_data_ptr = 0x008671C0;
#elif defined WARBAND_STEAM
unsigned int addresses::operation_Execute_jumptable = 0x0057E410;
unsigned int addresses::operation_Execute_entry = 0x0057E37C;
unsigned int addresses::operation_Execute_exit_1 = 0x0057E3A9;
unsigned int addresses::operation_Execute_exit_2 = operation_Execute_entry + 8;

unsigned int addresses::network_server_ReceiveTeamChatEvent_entry = 0x004C3E00;
unsigned int addresses::network_server_ReceiveTeamChatEvent_exit = network_server_ReceiveTeamChatEvent_entry + 6;

unsigned int addresses::network_server_ReceiveChatEvent_entry = 0x004C4090;
unsigned int addresses::network_server_ReceiveChatEvent_exit = network_server_ReceiveChatEvent_entry + 6;

unsigned int addresses::activate_entry = 0;

unsigned int addresses::ReadModuleFiles_entry = 0x0066B511;

unsigned int addresses::game_ReadModuleFiles_entry = 0x0066D3FE;

unsigned int addresses::ParseConsoleCommand_entry = 0;
unsigned int addresses::ParseConsoleCommand_exit_1 = 0;
unsigned int addresses::ParseConsoleCommand_exit_2 = 0;

unsigned int addresses::ExecuteConsoleCommand_entry = 0;

unsigned int addresses::Save_entry = 0x0060AC12;

unsigned int addresses::LoadSave_entry = 0x0061747C;
unsigned int addresses::LoadSave_exit = LoadSave_entry + 5;

unsigned int addresses::CheckUrlReplies_entry = 0x005B712C;
unsigned int addresses::CheckUrlReplies_exit = CheckUrlReplies_entry + 6;

unsigned int addresses::network_client_ReceiveMessage_entry = 0x0049F8A3;
unsigned int addresses::network_client_ReceiveMessage_exit_1 = 0x004A38F9;
unsigned int addresses::network_client_ReceiveMessage_exit_2 = network_client_ReceiveMessage_entry + 6;

unsigned int addresses::network_server_ReceiveMessage_entry = 0x004C5031;
unsigned int addresses::network_server_ReceiveMessage_exit_1 = 0x004C66E8;
unsigned int addresses::network_server_ReceiveMessage_exit_2 = network_server_ReceiveMessage_entry + 6;

unsigned int addresses::network_server_ReceiveMessageServerJoinRequest_entry = 0x0048DB22;
unsigned int addresses::network_server_ReceiveMessageServerJoinRequest_exit = network_server_ReceiveMessageServerJoinRequest_entry + 8;

unsigned int addresses::agent_ApplyAttackRecord_entry = 0x004FC270;
unsigned int addresses::agent_ApplyAttackRecord_exit = 0x004FC290;

unsigned int addresses::CreateMbnetHost_entry = 0x004CE725;
unsigned int addresses::DestroyMbnetHost_entry = 0x004CE753;

unsigned int addresses::XmlGetServerInfo = 0x0047CF50;
		
unsigned int addresses::mission_CheckCollision_entry = 0x00524491;
unsigned int addresses::mission_CheckCollision_exit = mission_CheckCollision_entry + 15;
		
unsigned int addresses::agent_SetGroundQuad_entry = 0x004F977E;
unsigned int addresses::agent_SetGroundQuad_exit = agent_SetGroundQuad_entry + 6;

unsigned int addresses::agent_ReceiveShieldHit_entry = 0x0050D803;
unsigned int addresses::agent_ReceiveShieldHit_exit = agent_ReceiveShieldHit_entry + 6;

unsigned int addresses::mission_SpawnMissile_entry = 0x0053000F;
unsigned int addresses::mission_SpawnMissile_exit = mission_SpawnMissile_entry + 5;

unsigned int addresses::missile_Dive_entry = 0x00521771;
unsigned int addresses::missile_Dive_exit = 0x005217B5;

unsigned int addresses::network_manager_PopulatePlayerInfoServerEvent_entry = 0x004B44BD;
unsigned int addresses::network_manager_PopulatePlayerInfoServerEvent_exit = network_manager_PopulatePlayerInfoServerEvent_entry + 8;

unsigned int addresses::network_manager_PopulatePlayerInfoClientEvent_entry = 0x00482858;
unsigned int addresses::network_manager_PopulatePlayerInfoClientEvent_exit = network_manager_PopulatePlayerInfoClientEvent_entry + 8;

unsigned int addresses::network_manager_PopulateServerOptionsServerEvent_entry = 0x004B41B0;

unsigned int addresses::network_manager_GoldNumBits_entry = 0x00814B5C;

unsigned int addresses::config_manager_ChooseNumberOfEffectiveCorpses_entry = 0x00405360;
unsigned int addresses::config_manager_ChooseNumberOfEffectiveCorpses_exit = config_manager_ChooseNumberOfEffectiveCorpses_entry + 5;

unsigned int addresses::UpdateHorseAgentEntityBody_entry = 0x00534AC1;
unsigned int addresses::UpdateHorseAgentEntityBody_exit = UpdateHorseAgentEntityBody_entry + 7;

unsigned int addresses::tactical_window_ShowUseTooltip_entry = 0x005F9186;
unsigned int addresses::tactical_window_ShowUseTooltip_exit = tactical_window_ShowUseTooltip_entry + 7;

unsigned int addresses::tactical_window_ShowCrosshair_entry = 0x005FA426;

unsigned int addresses::mission_CheckHit_Human_entry = 0x0052B0CD;
unsigned int addresses::mission_CheckHit_Human_exit_1 = 0x0052CF6B;
unsigned int addresses::mission_CheckHit_Human_exit_2 = 0x0052B12B;

unsigned int addresses::mission_CheckHit_Horse_entry = 0x0052B714;
unsigned int addresses::mission_CheckHit_Horse_exit_1 = 0x0052B76B;
unsigned int addresses::mission_CheckHit_Horse_exit_2 = 0x00524868;

unsigned int addresses::mission_CheckHit_Prop_entry = 0x0052A88F;
unsigned int addresses::mission_CheckHit_Prop_exit_1 = 0x0052AA97;
unsigned int addresses::mission_CheckHit_Prop_exit_2 = 0x0052A8B5;

unsigned int addresses::agent_HorseCharged_entry = 0x0050A01A;
unsigned int addresses::agent_HorseCharged_exit = agent_HorseCharged_entry + 5;

unsigned int addresses::mission_ApplyBlow_entry = 0x00527F80;
unsigned int addresses::mission_ApplyBlow_exit = mission_ApplyBlow_entry + 5;

unsigned int addresses::agent_GetScaleHuman_entry = 0x0055F2DD;
unsigned int addresses::agent_GetScaleHuman_exit = agent_GetScaleHuman_entry + 6;
unsigned int addresses::agent_GetScaleHorse_entry = 0x0055F3ED;
unsigned int addresses::agent_GetScaleHorse_exit = agent_GetScaleHorse_entry + 6;

unsigned int addresses::mission_object_Hit_entry = 0x0052D51E;
unsigned int addresses::mission_object_Hit_exit = mission_object_Hit_entry + 6;

unsigned int addresses::game_screen_OpenWindow_entry = 0x005926D0;

unsigned int addresses::game_screen_ProfileNumSkins_entry = 0x006122DF;

unsigned int addresses::game_screen_NewProfileLoadSkinList_entry = 0x00612A74;
unsigned int addresses::game_screen_NewProfileLoadSkinList_exit = game_screen_NewProfileLoadSkinList_entry + 5;

unsigned int addresses::game_screen_NewProfileAllocateMemoryForSkins_entry = 0x006128CC;

unsigned int addresses::game_screen_EditProfileLoadSkinList_entry = 0x00612C8F;
unsigned int addresses::game_screen_EditProfileLoadSkinList_exit = game_screen_EditProfileLoadSkinList_entry + 5;

unsigned int addresses::game_screen_EditProfileAllocateMemoryForSkins_entry = 0x00612AB8;

unsigned int addresses::item_kind_TransformHoldPosition_entry = 0x004D88A0;

unsigned int addresses::agent_CancelSwing_entry = 0x004F473F;
unsigned int addresses::agent_CancelSwing_exit = 0x004F4785;

unsigned int addresses::UpdateAgentEntityBody = 0x00534BF8;
		
unsigned int addresses::agent_DropItem_entry = 0x00512036;
unsigned int addresses::agent_DropItem_exit = agent_DropItem_entry + 6;

unsigned int addresses::agent_StartReloading_entry = 0x0050EA18;
unsigned int addresses::agent_StartReloadingClient_entry = 0x004CE8AC;
unsigned int addresses::agent_StartReloadingClient_exit = agent_StartReloadingClient_entry + 10;

unsigned int addresses::agent_EndReloading_entry_1 = 0x0050F5DE;
unsigned int addresses::agent_EndReloading_entry_2 = 0x0050F57A;

unsigned int addresses::item_Difficulty_entry = 0x004DD930;

unsigned int addresses::mission_object_WeaponKnockBack_entry = 0x004EDC5F;
unsigned int addresses::mission_object_WeaponKnockBack_exit = mission_object_WeaponKnockBack_entry + 5;

unsigned int addresses::item_kind_ShieldNoParry_entry = 0x004A564D;
unsigned int addresses::item_kind_ShieldNoParry_exit_1 = item_kind_ShieldNoParry_entry + 5;
unsigned int addresses::item_kind_ShieldNoParry_exit_2 = 0x004A5669;

unsigned int addresses::item_kind_ShieldNoParrySound_entry = 0x004ECF6F;
unsigned int addresses::item_kind_ShieldNoParrySound_exit_1 = item_kind_ShieldNoParrySound_entry + 8;
unsigned int addresses::item_kind_ShieldNoParrySound_exit_2 = 0x004ED0B4;

unsigned int addresses::item_kind_ShieldNoParryDamage_entry = 0x004ECC21;
unsigned int addresses::item_kind_ShieldNoParryDamage_exit_1 = item_kind_ShieldNoParryDamage_entry + 8;
unsigned int addresses::item_kind_ShieldNoParryDamage_exit_2 = 0x004ECEF6;

unsigned int addresses::item_kind_ShieldNoParryMissiles_entry = 0x004E8CFF;
unsigned int addresses::item_kind_ShieldNoParryMissiles_exit_1 = item_kind_ShieldNoParryMissiles_entry + 8;
unsigned int addresses::item_kind_ShieldNoParryMissiles_exit_2 = 0x004E9709;

unsigned int addresses::item_kind_ShieldNoParrySpeed_entry = 0x004A8B19;
unsigned int addresses::item_kind_ShieldNoParrySpeed_exit_1 = item_kind_ShieldNoParrySpeed_entry + 5;
unsigned int addresses::item_kind_ShieldNoParrySpeed_exit_2 = 0x004A8B2D;

unsigned int addresses::item_kind_ShieldNoParryCarry_entry = 0x004EFC60;
unsigned int addresses::item_kind_ShieldNoParryCarry_exit_1 = item_kind_ShieldNoParryCarry_entry + 9;
unsigned int addresses::item_kind_ShieldNoParryCarry_exit_2 = 0x004EFCEC;

unsigned int addresses::item_kind_ShieldNoParryCouchedLance_entry = 0x004E99B0;
unsigned int addresses::item_kind_ShieldNoParryCouchedLance_exit_1 = item_kind_ShieldNoParryCouchedLance_entry + 9;
unsigned int addresses::item_kind_ShieldNoParryCouchedLance_exit_2 = item_kind_ShieldNoParryMissiles_exit_2;

unsigned int addresses::item_kind_DisableAgentSoundsHorseShort_entry = 0x004CC538;
unsigned int addresses::item_kind_DisableAgentSoundsHorseShort_exit_1 = item_kind_DisableAgentSoundsHorseShort_entry + 5;
unsigned int addresses::item_kind_DisableAgentSoundsHorseShort_exit_2 = 0x004CC569;

unsigned int addresses::agent_BlockedAttack_entry = 0x004ED1C9;
unsigned int addresses::agent_BlockedAttack_exit = agent_BlockedAttack_entry + 8;

unsigned int addresses::agent_Turn_entry = 0x004A06BC;
unsigned int addresses::agent_Turn_exit = agent_Turn_entry + 8;

unsigned int addresses::agent_BloodParticles_entry = 0x004A6F23;
unsigned int addresses::agent_BloodParticles_exit = agent_BloodParticles_entry + 59;

unsigned int addresses::fixBotsBlocking_entry = 0;

unsigned int addresses::makeScreenShot = 0x005B0A40;

unsigned int addresses::operation_Execute = 0x00563D30;

unsigned int addresses::operation_manager_Execute = 0x00580940;

unsigned int addresses::operation_manager_StartProfilingBlock_entry = operation_manager_Execute;
unsigned int addresses::operation_manager_StartProfilingBlock_exit = operation_manager_StartProfilingBlock_entry + 6;
unsigned int addresses::operation_manager_StopProfilingBlock = 0x00538A94;

unsigned int addresses::basic_game_ParseString = 0x0051AEF0;

unsigned int addresses::particle_system_manager_Create = 0x00554C80;

unsigned int addresses::DXUtil_Timer = 0x0040F660;

unsigned int addresses::agent_SetAiBehavior = 0x00512D60;

unsigned int addresses::game_data_ptr = 0x009463D0;
#elif defined WARBAND_DEDICATED
//unsigned int addresses::operation_Execute_jumptable = 0x004C2FC8;
//unsigned int addresses::operation_Execute_entry = 0x004C2F36;
//unsigned int addresses::operation_Execute_exit_1 = 0x004C2F63;
unsigned int addresses::operation_Execute_jumptable = 0x004C74AC;
unsigned int addresses::operation_Execute_entry = 0x004C7419; //fallback for warbands "opcode out of range"
unsigned int addresses::operation_Execute_exit_1 = 0x004C7446; //dont continue (got wse operation)
unsigned int addresses::operation_Execute_exit_2 = operation_Execute_entry + 8;

//unsigned int addresses::network_server_ReceiveTeamChatEvent_entry = 0x00438340;
unsigned int addresses::network_server_ReceiveTeamChatEvent_entry = 0x00439610;
unsigned int addresses::network_server_ReceiveTeamChatEvent_exit = network_server_ReceiveTeamChatEvent_entry + 6;

//unsigned int addresses::network_server_ReceiveChatEvent_entry = 0x004385A0;
unsigned int addresses::network_server_ReceiveChatEvent_entry = 0x00439870;
unsigned int addresses::network_server_ReceiveChatEvent_exit = network_server_ReceiveChatEvent_entry + 6;

unsigned int addresses::activate_entry = 0;

//unsigned int addresses::ReadModuleFiles_entry = 0x004EDF33;
unsigned int addresses::ReadModuleFiles_entry = 0x004F67B3;

//unsigned int addresses::game_ReadModuleFiles_entry = 0x004EF38E;
unsigned int addresses::game_ReadModuleFiles_entry = 0x004F7C6E;

//unsigned int addresses::ParseConsoleCommand_entry = 0x004E1A4F;
//unsigned int addresses::ParseConsoleCommand_exit_1 = 0x004E61B6;
unsigned int addresses::ParseConsoleCommand_entry = 0x004E9BBF;
unsigned int addresses::ParseConsoleCommand_exit_1 = 0x004EE657;
unsigned int addresses::ParseConsoleCommand_exit_2 = ParseConsoleCommand_entry + 5;

unsigned int addresses::ExecuteConsoleCommand_entry = 0x004E9B00;

unsigned int addresses::Save_entry = 0;

unsigned int addresses::LoadSave_entry = 0;
unsigned int addresses::LoadSave_exit = 0;

//unsigned int addresses::CheckUrlReplies_entry = 0x004DBEDC;
//unsigned int addresses::CheckUrlReplies_exit = CheckUrlReplies_entry + 6;
unsigned int addresses::CheckUrlReplies_entry = 0x004E405E;
unsigned int addresses::CheckUrlReplies_exit = CheckUrlReplies_entry + 5;
unsigned int addresses::CheckUrlReplies_call = 0x00425040;

unsigned int addresses::network_client_ReceiveMessage_entry = 0;
unsigned int addresses::network_client_ReceiveMessage_exit_1 = 0;
unsigned int addresses::network_client_ReceiveMessage_exit_2 = 0;

//unsigned int addresses::network_server_ReceiveMessage_entry = 0x00439561;
//unsigned int addresses::network_server_ReceiveMessage_exit_1 = 0x0043AC51;
unsigned int addresses::network_server_ReceiveMessage_entry = 0x0043A701;
unsigned int addresses::network_server_ReceiveMessage_exit_1 = 0x0043BE01;
unsigned int addresses::network_server_ReceiveMessage_exit_2 = network_server_ReceiveMessage_entry + 6;

unsigned int addresses::network_server_ReceiveMessageServerJoinRequest_entry = 0x0043B6C2;
unsigned int addresses::network_server_ReceiveMessageServerJoinRequest_exit = network_server_ReceiveMessageServerJoinRequest_entry + 8;

//unsigned int addresses::agent_ApplyAttackRecord_entry = 0x0046D5B5;
//unsigned int addresses::agent_ApplyAttackRecord_exit = 0x0046D5D5;
unsigned int addresses::agent_ApplyAttackRecord_entry = 0x0046F159;
unsigned int addresses::agent_ApplyAttackRecord_exit = 0x0046F179;

//unsigned int addresses::CreateMbnetHost_entry = 0x00443835;
//unsigned int addresses::DestroyMbnetHost_entry = 0x00443863;
unsigned int addresses::CreateMbnetHost_entry = 0x00444A75;
unsigned int addresses::DestroyMbnetHost_entry = 0x00444AA3;

unsigned int addresses::XmlGetServerInfo = 0x0042CF20;
		
//unsigned int addresses::mission_CheckCollision_entry = 0x00489FA1;
unsigned int addresses::mission_CheckCollision_entry = 0x0048D031;
unsigned int addresses::mission_CheckCollision_exit = mission_CheckCollision_entry + 15;
		
//unsigned int addresses::agent_SetGroundQuad_entry = 0x0046A12B;
unsigned int addresses::agent_SetGroundQuad_entry = 0x0046BBFB;
unsigned int addresses::agent_SetGroundQuad_exit = agent_SetGroundQuad_entry + 6;

//unsigned int addresses::agent_ReceiveShieldHit_entry = 0x0047DBE3;
unsigned int addresses::agent_ReceiveShieldHit_entry = 0x0047FC61;
unsigned int addresses::agent_ReceiveShieldHit_exit = agent_ReceiveShieldHit_entry + 6;

//unsigned int addresses::mission_SpawnMissile_entry = 0x00492B27;
unsigned int addresses::mission_SpawnMissile_entry = 0x00497290;
unsigned int addresses::mission_SpawnMissile_exit = mission_SpawnMissile_entry + 5;

//unsigned int addresses::missile_Dive_entry = 0x00486F56;
//unsigned int addresses::missile_Dive_exit = 0x00486F96;
unsigned int addresses::missile_Dive_entry = 0x00489E26;
unsigned int addresses::missile_Dive_exit = 0x00489E72;

//unsigned int addresses::network_manager_PopulatePlayerInfoServerEvent_entry = 0x0042D18D;
unsigned int addresses::network_manager_PopulatePlayerInfoServerEvent_entry = 0x0042E4BD;
unsigned int addresses::network_manager_PopulatePlayerInfoServerEvent_exit = network_manager_PopulatePlayerInfoServerEvent_entry + 8;

unsigned int addresses::network_manager_PopulatePlayerInfoClientEvent_entry = 0;
unsigned int addresses::network_manager_PopulatePlayerInfoClientEvent_exit = 0;

//unsigned int addresses::network_manager_PopulateServerOptionsServerEvent_entry = 0x0042CE80;
unsigned int addresses::network_manager_PopulateServerOptionsServerEvent_entry = 0x0042E1B0;

unsigned int addresses::network_manager_GoldNumBits_entry = 0x0069E0BC;

unsigned int addresses::config_manager_ChooseNumberOfEffectiveCorpses_entry = 0;
unsigned int addresses::config_manager_ChooseNumberOfEffectiveCorpses_exit = 0;

unsigned int addresses::UpdateHorseAgentEntityBody_entry = 0;
unsigned int addresses::UpdateHorseAgentEntityBody_exit = 0;

unsigned int addresses::tactical_window_ShowUseTooltip_entry = 0;
unsigned int addresses::tactical_window_ShowUseTooltip_exit = 0;

unsigned int addresses::tactical_window_ShowCrosshair_entry = 0;

//unsigned int addresses::mission_CheckHit_Human_entry = 0x0048FC6D;
//unsigned int addresses::mission_CheckHit_Human_exit_1 = 0x00491AF6;
//unsigned int addresses::mission_CheckHit_Human_exit_2 = 0x0048FCCB;
unsigned int addresses::mission_CheckHit_Human_entry = 0x004935AB;
unsigned int addresses::mission_CheckHit_Human_exit_1 = 0x004954AC;
unsigned int addresses::mission_CheckHit_Human_exit_2 = 0x0049360A;

//unsigned int addresses::mission_CheckHit_Horse_entry = 0x004902B7;
//unsigned int addresses::mission_CheckHit_Horse_exit_1 = 0x0049030E;
//unsigned int addresses::mission_CheckHit_Horse_exit_2 = 0x00490303;
unsigned int addresses::mission_CheckHit_Horse_entry = 0x00493BF2;
unsigned int addresses::mission_CheckHit_Horse_exit_1 = 0x00493C4C;
unsigned int addresses::mission_CheckHit_Horse_exit_2 = 0x00493C3E;

//unsigned int addresses::mission_CheckHit_Prop_entry = 0x0048F438;
//unsigned int addresses::mission_CheckHit_Prop_exit_1 = 0x0048F63D;
//unsigned int addresses::mission_CheckHit_Prop_exit_2 = 0x0048F45E;
unsigned int addresses::mission_CheckHit_Prop_entry = 0x00492D09;
unsigned int addresses::mission_CheckHit_Prop_exit_1 = 0x00492F53;
unsigned int addresses::mission_CheckHit_Prop_exit_2 = 0x00492D2F;

//unsigned int addresses::agent_HorseCharged_entry = 0x0047AEFA;
unsigned int addresses::agent_HorseCharged_entry = 0x0047CC68;
unsigned int addresses::agent_HorseCharged_exit = agent_HorseCharged_entry + 5;

//unsigned int addresses::mission_ApplyBlow_entry = 0x0048CDB0;
unsigned int addresses::mission_ApplyBlow_entry = 0x004905E0;
unsigned int addresses::mission_ApplyBlow_exit = mission_ApplyBlow_entry + 5;

//unsigned int addresses::agent_GetScaleHuman_entry = 0x004A53B2;
unsigned int addresses::agent_GetScaleHuman_entry = 0x004A7882;
unsigned int addresses::agent_GetScaleHuman_exit = agent_GetScaleHuman_entry + 6;
//unsigned int addresses::agent_GetScaleHorse_entry = 0x004A54C2;
unsigned int addresses::agent_GetScaleHorse_entry = 0x004A7992;
unsigned int addresses::agent_GetScaleHorse_exit = agent_GetScaleHorse_entry + 6;

//unsigned int addresses::mission_object_Hit_entry = 0x004920A6;
unsigned int addresses::mission_object_Hit_entry = 0x00495ABB;
unsigned int addresses::mission_object_Hit_exit = mission_object_Hit_entry + 6;

unsigned int addresses::game_screen_OpenWindow_entry = 0;

unsigned int addresses::game_screen_ProfileNumSkins_entry = 0;

unsigned int addresses::game_screen_NewProfileLoadSkinList_entry = 0;
unsigned int addresses::game_screen_NewProfileLoadSkinList_exit = 0;

unsigned int addresses::game_screen_NewProfileAllocateMemoryForSkins_entry = 0;

unsigned int addresses::game_screen_EditProfileLoadSkinList_entry = 0;
unsigned int addresses::game_screen_EditProfileLoadSkinList_exit = 0;

unsigned int addresses::game_screen_EditProfileAllocateMemoryForSkins_entry = 0;

unsigned int addresses::item_kind_TransformHoldPosition_entry = 0;

//unsigned int addresses::agent_CancelSwing_entry = 0x0046569F;
//unsigned int addresses::agent_CancelSwing_exit = 0x004656E5;
unsigned int addresses::agent_CancelSwing_entry = 0x0046712F;
unsigned int addresses::agent_CancelSwing_exit = 0x00467175;

unsigned int addresses::UpdateAgentEntityBody = 0;
		
//unsigned int addresses::agent_DropItem_entry = 0x0047E420;
unsigned int addresses::agent_DropItem_entry = 0x004804B0;
unsigned int addresses::agent_DropItem_exit = agent_DropItem_entry + 6;

//unsigned int addresses::agent_StartReloading_entry = 0x00465F55;
unsigned int addresses::agent_StartReloading_entry = 0x00467A09;
unsigned int addresses::agent_StartReloadingClient_entry = 0;
unsigned int addresses::agent_StartReloadingClient_exit = 0;

//unsigned int addresses::agent_EndReloading_entry_1 = 0x004669C2;
//unsigned int addresses::agent_EndReloading_entry_2 = 0x00466A03;
unsigned int addresses::agent_EndReloading_entry_1 = 0x00468482;
unsigned int addresses::agent_EndReloading_entry_2 = 0x004684C3;

unsigned int addresses::item_Difficulty_entry = 0x004873F0;

unsigned int addresses::mission_object_WeaponKnockBack_entry = 0x00495657;
unsigned int addresses::mission_object_WeaponKnockBack_exit = mission_object_WeaponKnockBack_entry + 5;

unsigned int addresses::item_kind_ShieldNoParry_entry = 0x004542AD;
unsigned int addresses::item_kind_ShieldNoParry_exit_1 = item_kind_ShieldNoParry_entry + 5;
unsigned int addresses::item_kind_ShieldNoParry_exit_2 = 0x004542C9;

unsigned int addresses::item_kind_ShieldNoParrySound_entry = 0x00494986;
unsigned int addresses::item_kind_ShieldNoParrySound_exit_1 = item_kind_ShieldNoParrySound_entry + 8;
unsigned int addresses::item_kind_ShieldNoParrySound_exit_2 = 0x00494ACB;

unsigned int addresses::item_kind_ShieldNoParryDamage_entry = 0x00494638;
unsigned int addresses::item_kind_ShieldNoParryDamage_exit_1 = item_kind_ShieldNoParryDamage_entry + 8;
unsigned int addresses::item_kind_ShieldNoParryDamage_exit_2 = 0x0049490D;

unsigned int addresses::item_kind_ShieldNoParryMissiles_entry = 0x004909CF;
unsigned int addresses::item_kind_ShieldNoParryMissiles_exit_1 = item_kind_ShieldNoParryMissiles_entry + 8;
unsigned int addresses::item_kind_ShieldNoParryMissiles_exit_2 = 0x004913D9; 

unsigned int addresses::item_kind_ShieldNoParrySpeed_entry = 0x004574C0;
unsigned int addresses::item_kind_ShieldNoParrySpeed_exit_1 = item_kind_ShieldNoParrySpeed_entry + 5;
unsigned int addresses::item_kind_ShieldNoParrySpeed_exit_2 = 0x004574D4;

unsigned int addresses::item_kind_ShieldNoParryCarry_entry = 0;
unsigned int addresses::item_kind_ShieldNoParryCarry_exit_1 = 0;
unsigned int addresses::item_kind_ShieldNoParryCarry_exit_2 = 0;

unsigned int addresses::item_kind_ShieldNoParryCouchedLance_entry = 0x00491680;
unsigned int addresses::item_kind_ShieldNoParryCouchedLance_exit_1 = item_kind_ShieldNoParryCouchedLance_entry + 9;
unsigned int addresses::item_kind_ShieldNoParryCouchedLance_exit_2 = item_kind_ShieldNoParryMissiles_exit_2;

unsigned int addresses::item_kind_DisableAgentSoundsHorseShort_entry = 0x00465322;
unsigned int addresses::item_kind_DisableAgentSoundsHorseShort_exit_1 = item_kind_DisableAgentSoundsHorseShort_entry + 5;
unsigned int addresses::item_kind_DisableAgentSoundsHorseShort_exit_2 = 0x00465353;

unsigned int addresses::agent_BlockedAttack_entry = 0x00494BE0;
unsigned int addresses::agent_BlockedAttack_exit = agent_BlockedAttack_entry + 8;

unsigned int addresses::agent_Turn_entry = 0x0044E769;
unsigned int addresses::agent_Turn_exit = agent_Turn_entry + 8;

unsigned int addresses::agent_BloodParticles_entry = 0;
unsigned int addresses::agent_BloodParticles_exit = 0;

unsigned int addresses::fixBotsBlocking_entry = 0x00460605;

unsigned int addresses::makeScreenShot = 0;

//unsigned int addresses::operation_Execute = 0x004AD270;
unsigned int addresses::operation_Execute = 0x004AF6D0;

//unsigned int addresses::operation_manager_Execute = 0x004C54E0;
unsigned int addresses::operation_manager_Execute = 0x004C9FA0;

unsigned int addresses::operation_manager_StartProfilingBlock_entry = operation_manager_Execute;
unsigned int addresses::operation_manager_StartProfilingBlock_exit = operation_manager_StartProfilingBlock_entry + 6;
unsigned int addresses::operation_manager_StopProfilingBlock = 0x004CA6F3;

//unsigned int addresses::basic_game_ParseString = 0x00481800;
unsigned int addresses::basic_game_ParseString = 0x00484090;

unsigned int addresses::particle_system_manager_Create = 0;

unsigned int addresses::DXUtil_Timer = 0x00401040;

//unsigned int addresses::agent_SetAiBehavior = 0x0046F3C0;
unsigned int addresses::agent_SetAiBehavior = 0x00470F30;

unsigned int addresses::temp_ban_time_dbl_ptr = 0x0069E670;

unsigned int addresses::write_to_rgl_log_file_handle_base_var = 0x006E4F1C;
unsigned int addresses::write_to_rgl_log = 0x0050BBCD;
unsigned int addresses::write_to_rgl_log_exit = write_to_rgl_log + 5;

//unsigned int addresses::game_data_ptr = 0x006D8428;
unsigned int addresses::game_data_ptr = 0x006E3430;
#endif
