#include "../stdafx.h"
#include "Exports.hpp"

void Wwise::Exports::Initialize() {
	uintptr_t baseHandle = (uintptr_t)GetModuleHandle(NULL);

	// Root
	func_Wwise_Root_IsRestoreSinkRequested = 0x00ec5d70;
	func_Wwise_Root_IsUsingDummySink = 0x00ec5d60;

	// IAkStreamMgr
	// Only has a single pointer, and is protected https://www.audiokinetic.com/library/2015.1.9_5624/?source=SDK&id=class_a_k_1_1_i_ak_stream_mgr_a85c6043c1a45f13b7df2f05729248b1f.html
	func_Wwise_IAkStreamMgr_m_pStreamMgr = 0x00f1c460; // Idk

	// MemoryMgr
	func_Wwise_Memory_CheckPoolId = 0x00E9FF70;
	func_Wwise_Memory_CreatePool = 0x00E9FC80;
	func_Wwise_Memory_DestroyPool = 0x00E9FE20;
	func_Wwise_Memory_Falign = 0x00EA01E0;
	func_Wwise_Memory_GetBlock = 0x00EA0230;
	func_Wwise_Memory_GetBlockSize = 0x00E9FF30;
	func_Wwise_Memory_GetMaxPools = 0x00E9FF60;
	func_Wwise_Memory_GetNumPools = 0x00E9FF50;
	func_Wwise_Memory_GetPoolAttributes = 0x00E9FF10;
	func_Wwise_Memory_GetPoolMemoryUsed = 0x00EA01A0;
	func_Wwise_Memory_GetPoolName = 0x00c94f80; // TODO: may be worth a check, this one doesn't seem to be exported
	func_Wwise_Memory_GetPoolStats = 0x00EA0130;
	func_Wwise_Memory_IsInitialized = 0x00E9FED0;
	func_Wwise_Memory_Malign = 0x00EA00D0;
	func_Wwise_Memory_Malloc = 0x00EA0050;
	func_Wwise_Memory_Free = 0x00EA01E0;
	func_Wwise_Memory_ReleaseBlock = 0x00EA0280;
	func_Wwise_Memory_SetMonitoring = 0x00D3F130;
	func_Wwise_Memory_SetPoolName = 0x00E9FEE0;
	func_Wwise_Memory_Term = 0x00EA02D0;

	// Monitor
	func_Wwise_Monitor_PostCode = 0x00a004a;

	// Motion Engine
	func_Wwise_Motion_AddPlayerMotionDevice = 0x00ec2a00;
	func_Wwise_Motion_RegisterMotionDevice = 0x00ec2ab0;
	func_Wwise_Motion_RemovePlayerMotionDevice = 0x00ec2a60;
	func_Wwise_Motion_SetPlayerListener = 0x00ec2ac0;
	func_Wwise_Motion_SetPlayerVolume = 0x00ec2b00;

	// Music Engine
	func_Wwise_Music_GetDefaultInitSettings = 0x00ea16a0;
	func_Wwise_Music_GetPlayingSegmentInfo = 0x00ea16f0;
	func_Wwise_Music_Init = 0x00ea23e0;
	func_Wwise_Music_Term = 0x00ea22b0;

	// Sound Engine
	func_Wwise_Sound_AddBehaviorExtension = 0x00ec46a0;
	func_Wwise_Sound_CancelBankCallbackCookie = 0x00ec2400;
	func_Wwise_Sound_CancelEventCallback = 0x00ec1c80;
	func_Wwise_Sound_CancelEventCallbackCookie = 0x00ec1c60;
	func_Wwise_Sound_ClearBanks = 0x00ec3140;
	func_Wwise_Sound_ClearPreparedEvents = 0x00ec2530;
	func_Wwise_Sound_CloneActorMixerEffect = 0x00ec5b70;
	func_Wwise_Sound_CloneBusEffect = 0x00ec5b50;
	func_Wwise_Sound_DynamicDialogue_ResolveDialogueEvent_UniqueID = 0x00ec5560;
	func_Wwise_Sound_DynamicDialogue_ResolveDialogueEvent_Char = 0x00ec5640;
	func_Wwise_Sound_DynamicSequence_Break = 0x00ec58d0;
	func_Wwise_Sound_DynamicSequence_Close = 0x00ec5950;
	func_Wwise_Sound_DynamicSequence_LockPlaylist = 0x00ec59d0;
	func_Wwise_Sound_DynamicSequence_Open = 0x00ec1cd0;
	func_Wwise_Sound_DynamicSequence_Pause = 0x00ec5750;
	func_Wwise_Sound_DynamicSequence_Play = 0x00ec56d0;
	func_Wwise_Sound_DynamicSequence_Resume = 0x00ec57d0;
	func_Wwise_Sound_DynamicSequence_Stop = 0x00ec5850;
	func_Wwise_Sound_DynamicSequence_UnlockPlaylist = 0x00ec5a10;
	func_Wwise_Sound_ExecuteActionOnEvent_UniqueID = 0x00ec5240;
	func_Wwise_Sound_ExecuteActionOnEvent_Char = 0x00ec52f0;
	func_Wwise_Sound_g_PlayingID = 0x00ec0890; // Idk
	func_Wwise_Sound_GetDefaultInitSettings = 0x00ec1120;
	func_Wwise_Sound_GetDefaultPlatformInitSettings = 0x00ec1180;
	func_Wwise_Sound_GetIDFromString = 0x00ec2c30;
	func_Wwise_Sound_GetPanningRule = 0x00ec1190;
	func_Wwise_Sound_GetSourcePlayPosition = 0x00ec1ca0;
	func_Wwise_Sound_GetSpeakerConfiguration = 0x00ec11a0;
	func_Wwise_Sound_Init = 0x00ec5b90;
	func_Wwise_Sound_IsInitialized = 0x00ec1110;
	func_Wwise_Sound_LoadBank_BankID_MemPoolID = 0x00ec2070;
	func_Wwise_Sound_LoadBank_Void_UInt32_BankID = 0x00ec2130;
	func_Wwise_Sound_LoadBank_BankID_Callback = 0x00ec21e0;
	func_Wwise_Sound_LoadBank_Void_UInt32_Callback = 0x00ec2240;
	func_Wwise_Sound_LoadBank_Char_MemPoolID = 0x00ec33a0;
	func_Wwise_Sound_LoadBank_Char_Callback = 0x00ec34b0;
	func_Wwise_Sound_LoadBankUnique = 0x00ec3510;
	func_Wwise_Sound_PlaySourcePlugin = 0x00ec1b90;
	func_Wwise_Sound_PostEvent_Char = 0x00ec51b0;
	func_Wwise_Sound_PostEvent_UniqueID = 0x00ec5cc0;
	func_Wwise_Sound_PostTrigger_TriggerID = 0x00ec1610;
	func_Wwise_Sound_PostTrigger_Char = 0x00ec2ee0;
	func_Wwise_Sound_PrepareBank_BankID_Callback = 0x00ec2420;
	func_Wwise_Sound_PrepareBank_BankID_BankContent = 0x00ec36f0;
	func_Wwise_Sound_PrepareBank_Char_Callback = 0x00ec3800;
	func_Wwise_Sound_PrepareBank_Char_BankContent = 0x00ec4590;
	func_Wwise_Sound_PrepareEvent_EventID_UInt32 = 0x00ec2480;
	func_Wwise_Sound_PrepareEvent_EventID_UInt32_Callback_Void = baseHandle + 0x00AC1B60;
	func_Wwise_Sound_PrepareEvent_Char_UInt32 = 0x00ec39f0;
	func_Wwise_Sound_PrepareEvent_Char_UInt32_Callback_Void = 0x00ec3ce0;
	func_Wwise_Sound_PrepareGameSyncs_UInt32_UInt32_UInt32_Callback_Void = 0x00ec3f60;
	func_Wwise_Sound_PrepareGameSyncs_UInt32_UInt32_UInt32 = 0x00ec41a0;
	func_Wwise_Sound_PrepareGameSyncs_Char_Char_UInt32_Callback_Void = 0x00ec25d0;
	func_Wwise_Sound_PrepareGameSyncs_Char_Char_UInt32 = 0x00ec2600;
	func_Wwise_Sound_Query_GetActiveGameObjects = 0x00ec0790;
	func_Wwise_Sound_Query_GetActiveListeners = 0x00ec0a90;
	func_Wwise_Sound_Query_GetCustomPropertyValue_Int32 = 0x00ec08c0;
	func_Wwise_Sound_Query_GetCustomPropertyValue_Real32 = 0x00ec0950;
	func_Wwise_Sound_Query_GetEventIDFromPlayingID = 0x00ec0850;
	func_Wwise_Sound_Query_GetGameObjectAuxSendValues = 0x00ec0d90;
	func_Wwise_Sound_Query_GetGameObjectDryLevelValue = 0x00ec0e80;
	func_Wwise_Sound_Query_GetGameObjectFromPlayingID = 0x00ec0870;
	func_Wwise_Sound_Query_GetIsGameObjectActive = 0x00ec07c0;
	func_Wwise_Sound_Query_GetListenerPosition = 0x00ec05b0;
	func_Wwise_Sound_Query_GetListenerSpatialization = 0x00ec061;
	func_Wwise_Sound_Query_GetMaxRadius_RadiusList = 0x00ec07f0;
	func_Wwise_Sound_Query_GetMaxRadius_GameObject = 0x00ec0820;
	func_Wwise_Sound_Query_GetObjectObstructionAndOcclusion = 0x00ec0f10;
	func_Wwise_Sound_Query_GetPlayingIDsFromGameObject = 0x00ec0890;
	func_Wwise_Sound_Query_GetPosition = 0x00ec09e0;
	func_Wwise_Sound_Query_GetPositioningInfo = 0x00ec0730;
	func_Wwise_Sound_Query_GetRTPCValue_RTPCID = 0x00ec0b20;
	func_Wwise_Sound_Query_GetRTPCValue_Char = 0x00ec0c50;
	func_Wwise_Sound_Query_GetState_StateGroupID = 0x00ec0650;
	func_Wwise_Sound_Query_GetState_Char = 0x00ec06e0;
	func_Wwise_Sound_Query_GetSwitch_SwitchGroupID = 0x00ec0c90;
	func_Wwise_Sound_Query_GetSwitch_Char = 0x00ec0d60;
	func_Wwise_Sound_Query_QueryAudioObjectIDs_UniqueID = 0x00ec0fd0;
	func_Wwise_Sound_Query_QueryAudioObjectIDs_Char = 0x00ec1080;
	func_Wwise_Sound_RegisterBusVolumeCallback = 0x00ec1780;
	func_Wwise_Sound_RegisterCodec = 0x00ec11d0;
	func_Wwise_Sound_RegisterGameObj = 0x00ec1d70;
	func_Wwise_Sound_RegisterGlobalCallback = 0x00ec4770;
	func_Wwise_Sound_RegisterPlugin = 0x00ec11c0;
	func_Wwise_Sound_RemoveBehavioralExtension = 0x00ec4710;

	func_Wwise_Sound_RenderAudio = 0x00ec11b0;
	func_Wwise_Sound_ResetRTPCValue_RTPCID = 0x00ec16a0;
	func_Wwise_Sound_ResetRTPCValue_Char = 0x00ec30a0;
	func_Wwise_Sound_SeekOnEvent_UniqueID_Int32 = 0x00ec5320;
	func_Wwise_Sound_SeekOnEvent_Char_Int32 = 0x00ec53c0;
	func_Wwise_Sound_SeekOnEvent_UniqueID_Float = 0x00ec53f0;
	func_Wwise_Sound_SeekOnEvent_Char_Float = 0x00ec54e0;
	func_Wwise_Sound_SetActiveListeners = 0x00ec13c0;
	func_Wwise_Sound_SetActorMixerEffect = 0x00ec26e0;
	func_Wwise_Sound_SetAttenuationScalingFactor = 0x00ec1320;
	func_Wwise_Sound_SetBankLoadIOSettings = 0x00ec1e80;
	func_Wwise_Sound_SetBusEffect_UniqueID = 0x00ec2690;
	func_Wwise_Sound_SetBusEffect_Char = 0x00ec4320;
	func_Wwise_Sound_SetEffectParam = 0x00ec2730;
	func_Wwise_Sound_SetGameObjectAuxSendValues = 0x00ec1720;
	func_Wwise_Sound_SetGameObjectOutputBusVolume = 0x00ec17b0;
	func_Wwise_Sound_SetListenerPipeline = 0x00ec1510;
	func_Wwise_Sound_SetListenerPosition = 0x00ec1400;
	func_Wwise_Sound_SetListenerScalingFactor = 0x00ec1370;
	func_Wwise_Sound_SetListenerSpatialization = 0x00ec14a0;
	func_Wwise_Sound_SetMaxNumVoicesLimit = 0x00ec3100;
	func_Wwise_Sound_SetMultiplePositions = 0x00ec1240;
	func_Wwise_Sound_SetObjectObstructionAndOcclusion = 0x00ec17f0;
	func_Wwise_Sound_SetPanningRule = 0x00ec1b10;
	func_Wwise_Sound_SetPosition = 0x00ec2d10;
	func_Wwise_Sound_SetPositionInternal = 0x00ec11e0;
	func_Wwise_Sound_SetRTPCValue_RTPCID = 0x00ec1550;
	func_Wwise_Sound_SetRTPCValue_Char = 0x00ec2d70;
	func_Wwise_Sound_SetState_StateGroupID = 0x00ec2f30;
	func_Wwise_Sound_SetState_Char = 0x00ec2ff0;
	func_Wwise_Sound_SetSwitch_SwitchGroupID = 0x00ec15d0;
	func_Wwise_Sound_SetSwitch_Char = 0x00ec2e20;
	func_Wwise_Sound_SetVolumeThreshold = 0x00ec30e0;
	func_Wwise_Sound_StartOutputCapture = 0x00ec27a0;
	func_Wwise_Sound_StopAll = 0x00ec2970;
	func_Wwise_Sound_StopOutputCapture = 0x00ec2850;
	func_Wwise_Sound_StopPlayingID = 0x00ec29b0;
	func_Wwise_Sound_StopSourcePlugin = 0x00ec1c00;
	func_Wwise_Sound_Term = 0x00ec4c70;
	func_Wwise_Sound_UnloadBank_BankID_MemPoolID = 0x00ec22c0;
	func_Wwise_Sound_UnloadBank_BankID_Callback = 0x00ec23a0;
	func_Wwise_Sound_UnloadBank_Char_MemPoolID = 0x00ec35a0;
	func_Wwise_Sound_UnloadBank_Char_Callback = 0x00ec3620;
	func_Wwise_Sound_UnloadBankUnique = 0x00ec3680;
	func_Wwise_Sound_UnregisterAllGameObj = 0x00ec1e10;
	func_Wwise_Sound_UnregisterGameObj = 0x00ec1dc0;
	func_Wwise_Sound_UnregisterGlobalCallback = 0x00ec47a0;
}