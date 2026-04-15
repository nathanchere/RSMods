#pragma once

#include <vector>

namespace Offsets {
	extern uintptr_t baseHandle; // Beginning of Rocksmith
	inline uintptr_t baseEnd; // End of Rocksmith

	// Loft Settings
	inline uintptr_t ptr_loft;
	extern std::vector<unsigned int> ptr_loft_nearOffsets;
	extern std::vector<unsigned int> ptr_loft_farOffsets;

	// Current Tuning
	inline uintptr_t ptr_tuning;
	extern std::vector<unsigned int> ptr_tuningOffsets;

	// True Tuning
	inline uintptr_t ptr_trueTuning;
	extern std::vector<unsigned int> ptr_trueTuningOffsets;
	inline uintptr_t ptr_disableTrueTuning;
	inline uintptr_t ptr_disableTrueTuning_jmpBck;
	inline uintptr_t ptr_disableTrueTuning_forceTT;
	inline uintptr_t ptr_disableTrueTuningGate;

	// Tuning - Textual Form
	inline uintptr_t ptr_tuningText;
	extern std::vector<unsigned int> ptr_tuningTextOffsets;

	// Current Note (Midi value: https://djip.co/w/wp-content/uploads/drupal/blog/logic-midi-note-numbers.png | 0 - 96 are used in Rocksmith).
	inline uintptr_t ptr_guitarSpeak;
	extern std::vector<unsigned int> ptr_guitarSpeakOffets;

	// Removed do to access to Wwise calls.
	//// Mixer Volumes
	//extern uintptr_t ptr_songVolume;
	//extern std::vector<unsigned int> ptr_songVolumeOffsets;
	//extern uintptr_t ptr_mixerVolumeBase;
	//extern std::vector<unsigned int> ptr_playerOneGuitarOffsets;
	//extern std::vector<unsigned int> ptr_playerOneBassOffsets;
	//extern std::vector<unsigned int> ptr_playerTwoGuitarOffsets;
	//extern std::vector<unsigned int> ptr_playerTwoBassOffsets;
	//extern std::vector<unsigned int> ptr_micOffsets;
	//extern std::vector<unsigned int> ptr_voOffsets;
	//extern std::vector<unsigned int> ptr_sfxOffsets;

	// Force Enumeration
	inline uintptr_t hookBackAddr_ForceEnumeration, hookBackAddr_Enumeration;
	inline uintptr_t func_ForceEnumeration;
	inline uintptr_t ptr_enumerateService;
	extern std::vector<unsigned int> ptr_enumerateServiceOffsets;

	// Custom Song Lists
	inline uintptr_t hookBackAddr_FakeTitles, hookBackAddr_CustomNames, hookBackAddr_missingLocalization;
	inline uintptr_t hookAddr_ModifyLocalized;
	inline uintptr_t hookAddr_ModifyCleanString;
	inline uintptr_t hookAddr_MissingLocalization;
	inline uintptr_t func_ecxAddress;
	inline uintptr_t func_getStringFromCSV;
	inline uintptr_t func_getLocalizedString;
	inline uintptr_t func_appendString; //for reference purposes
	inline uintptr_t patch_addedSpaces;
	inline uintptr_t patch_addedNumbers;
	inline uintptr_t patch_sprintfArg;
	extern const char* patch_ListSpaces;
	extern const char* patch_ListNumbers;
	extern const char* patch_SprintfArgs;

	// Disable Controllers
	inline uintptr_t hookAddr_DirectInput8, hookBackAddr_DirectInput8;
	inline uintptr_t xinputModule;
	inline uintptr_t xinputEnable;

	//D3D Stuff
	extern const char* d3dDevice_Pattern;
	extern uint32_t d3dDevice_SearchLen;
	extern char* d3dDevice_Mask;

	// Multiplayer
	inline uintptr_t ptr_multiplayer;
	extern std::vector<unsigned int> ptr_multiplayerOffsets;

	void Initialize();

	// Current Menu
	// extern uintptr_t ptr_currentMenu;
	// extern std::vector<unsigned int> ptr_currentMenuOffsets; // Old menu check, decided it loved to not work on some builds
	inline uintptr_t ptr_currentMenu; // https://media.discordapp.net/attachments/711633334983196756/744071651498655814/unknown.png, the game uses this one, so we may as well
	extern std::vector<unsigned int> ptr_currentMenuOffsets; // But the offsets stay the same, hurray!
	extern std::vector<unsigned int> ptr_preMainMenuOffsets;

	// Timer
	inline uintptr_t ptr_timer;
	extern std::vector<unsigned int> ptr_timerBaseOffsets;
	inline uintptr_t ptr_timerRare;
	extern std::vector<unsigned int> ptr_timerRareOffsets;

	// Grey Out Note Timer
	inline uintptr_t ptr_greyOutNoteTimer;
	extern std::vector<unsigned int> ptr_greyOutNoteTimerOffsets;

	// Song Speed (Riff Repeater Speed! Not Scroll Speed)
	inline uintptr_t ptr_previewName;
	extern std::vector<unsigned int> ptr_previewNameOffsets;
	inline uintptr_t ptr_timeStretchCalculations;
	inline uintptr_t ptr_timeStretchCalculationsJmpBck;

	// Selected Profile Name
	inline uintptr_t ptr_selectedProfileName;
	extern std::vector<unsigned int> ptr_selectedProfileNameOffsets;

	// Two RTC Bypass
	inline uintptr_t ptr_twoRTCBypass;
	extern const char* ptr_twoRTCBypass_patch_call;
	extern const char* ptr_twoRTCBypass_patch_test;
	extern const char* ptr_twoRTCBypass_patch_jz;
	extern const char* ptr_twoRTCBypass_patch_mov;
	extern const char* ptr_twoRTCBypass_patch_lea;
	extern const char* ptr_twoRTCBypass_origina;
	extern const char* ptr_twoRTCBypass_original;

	// Non-stop Play Pre-Song Timer.
	// STATIC. This does not need any offsets since the address is hard-coded into the executable.
	inline uintptr_t ptr_NonStopPlayPreSongTimer;

	// Colorblind Mode
	inline uintptr_t ptr_colorBlindMode;
	extern std::vector<unsigned int> ptr_colorBlindModeOffsets;

	// Twitch Mods
	inline uintptr_t ptr_currentNoteStreak;
	extern std::vector<unsigned int> ptr_currentNoteStreakLASOffsets;
	extern std::vector<unsigned int> ptr_currentNoteStreakSAOffsets;
	inline uintptr_t ptr_wavyNotesHook;
	inline uintptr_t ptr_wavyNotesJmpBck;

	// Wwise Logging
	inline uintptr_t ptr_Wwise_Log_PostEventHook;
	inline uintptr_t ptr_Wwise_Log_PostEventHookJmpBck;
	inline uintptr_t ptr_Wwise_Log_SetRTPCValueHook;
	inline uintptr_t ptr_Wwise_Log_SetRTPCValueHookJmpBck;
	inline uintptr_t ptr_Wwise_Log_SeekOnEventHook;
	inline uintptr_t ptr_Wwise_Log_SeekOnEventHookJmpBck;
	inline uintptr_t ptr_Wwise_Log_SetBusEffect;
	inline uintptr_t ptr_Wwise_Log_SetBusEffectJmpBck;
	inline uintptr_t ptr_Wwise_Log_CloneBusEffect;
	inline uintptr_t ptr_Wwise_Log_CloneBusEffectJmpBck;

	// Bug Prevention
	inline uintptr_t ptr_OculusCrashJmp;
	inline uintptr_t ptr_StuckToneJmp;
	inline uintptr_t ptr_PnpJmp_1;
	inline uintptr_t ptr_PnpJmp_2;
	inline uintptr_t ptr_Password_LimitCharacters_Clipboard;
	inline uintptr_t ptr_Password_LimitCharacters;
	inline uintptr_t ptr_AdvancedDisplayCrash;
	inline uintptr_t ptr_AdvancedDisplayCrashJmpBck;
	inline uintptr_t ptr_PortAudioInCrash; 
	inline uintptr_t ptr_AdditionalAudioDevicesCrash;
	inline uintptr_t ptr_ModdedPtrCrashFix;

	// Audio In Background
	inline uintptr_t ptr_IsWindowInFocus;
	inline uintptr_t ptr_WindowNotInFocusValue;

	// Lua Hijack
		// Gamebryo Game Engine
	inline uintptr_t ptr_luaopen_BehaviorAPI;
	inline uintptr_t ptr_luaopen_ecr;
	inline uintptr_t ptr_luaopen_ecrInput;
	inline uintptr_t ptr_luaopen_egmAnimation;
		// Rocksmith
	inline uintptr_t ptr_luaopen_AlphaGame;
	inline uintptr_t ptr_luaopen_DetectionBindings;
	inline uintptr_t ptr_luaopen_GameBindings;
	inline uintptr_t ptr_luaopen_GuitarBindings;
	inline uintptr_t ptr_luaopen_Guitarcade;
	inline uintptr_t ptr_luaopen_RSAudioBindings;
	inline uintptr_t ptr_luaopen_UIBindings;
	inline uintptr_t ptr_luaopen_VenueBindings;
		// Misc
	inline uintptr_t ptr_luaopen_epgmGFx;
	inline uintptr_t ptr_luaopen_epgmWwise;

	// Adjust sample rate requirements
	inline uintptr_t ptr_sampleRateRequirementAudioOutput;
	inline uintptr_t ptr_sampleRateRequirementAudioOutput_JmpBck;
	inline uintptr_t ptr_sampleRateDivZeroCrash;
	inline uintptr_t ptr_sampleRateDivZeroCrash_JmpBck;
	inline uintptr_t ptr_sampleRateSize;
	inline uintptr_t ptr_sampleRateBuffer;

	// Misc Mods
	inline uintptr_t ptr_stringColor;
	inline uintptr_t ptr_drunkShit; //search for float 0.333333, seems like it's static
	inline uintptr_t ptr_scrollSpeedMultiplier;
	inline uintptr_t patch_SongPreviewWwiseEvent;
	inline uintptr_t steamApiUri;

	inline volatile double* ref_scrollSpeedMultiplier;

	// Objects
	inline uintptr_t ptr_rootObject;
	extern std::vector<unsigned int> ptr_rootObjectOffsets;

	// Faster dynamic density / scroll speed change
	inline uintptr_t patch_scrollSpeedLTTarget; // Less than target
	inline uintptr_t patch_scrollSpeedGTTarget; // Greater than target
	extern const char* patch_scrollSpeedChange;

	extern std::vector<unsigned int> ptr_noteDataOffsets;
	extern std::vector<unsigned int> ptr_scoreAttackNoteDataOffsets;

	inline uintptr_t ptr_noteData;
	inline uintptr_t ptr_scoreAttackNoteData;
};