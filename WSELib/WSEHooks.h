#pragma once

void DebugHook();
void OperationManagerExecuteHook();
void OperationExecuteHook();
void ChatMessageReceivedHook();
void TeamChatMessageReceivedHook();
void ReadModuleFilesHook();
void GameReadModuleFilesHook();
void ParseConsoleCommandHook();
void SaveHook();
void CheckUrlRepliesHook();
void ClientNetworkMessageReceivedHook();
void ServerNetworkMessageReceivedHook();
void AgentApplyAttackRecHook();
void CreateMbnetHostHook();
void DestroyMbnetHostHook();
void MissionSpawnObjectHook();
void MissionCheckCollisionHook();
void AgentSetGroundQuad();
void MissionSpawnMissileHook();
void NetworkManagerPopulatePlayerInfoServerEventHook();
void NetworkManagerPopulateServerOptionsServerEventHook();
void ConfigManagerChooseNumberOfEffectiveCorpsesHook();
void AgentReceiveShieldHitHook();
void UpdateHorseAgentEntityBodyHook();
void TacticalWindowShowUseTooltipHook();
void AgentAttackCollidesWithAllyHumanHook();
void AgentAttackCollidesWithAllyHorseHook();
void AgentAttackCollidesWithPropHook();
void AgentHorseChargedHook();
void TacticalWindowShowCrosshairHook();
void MissionApplyBlowHook();
void MissionApplyBlowHook();
void MissionApplyBlowHook();
void AgentGetScaleHumanHook();
void AgentGetScaleHorseHook();
void MissionObjectHitHook();
void OpenWindowHook();
void ItemKindTransformHoldPositionHook();
void AgentGetItemForUnbalancedCheckHook();
void UpdateAgentEntityBodyHook();
void AgentDropItemHook();
void AgentStartReloadingHook();
void AgentEndReloadingHook();
void MissileDiveHook();
void NewSerialKeyCheckHook();
void ItemDifficultyCheckHook();
void MissionObjectWeaponKnockBackHook();
void ItemKindShieldNoParryHook();
void ItemKindShieldNoParrySoundHook();
void ItemKindShieldNoParryDamageHook();
void ItemKindShieldNoParryMissilesHook();
void ItemKindShieldNoParrySpeedHook();
void ItemKindShieldNoParryCarryHook();
void AgentBlockedAttackHook();