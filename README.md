# Hollow Knight Speedrun Community: Resources

This repository contains persistent links and file downloads for various resources used for Hollow Knight Speedrunning.

Most programs listed here are not signed, and so Windows will initially show `Windows protected your PC` - to continue to run, click `More info`, then `Run anyway`.

## External resources

### Legal macro programs
The following are the macro programs legal for use in runs.

#### [SOCD Cleaner](https://github.com/valignatev/socd/releases/latest)
Overrides the default left+right behaviour for the most recently pressed key to take precedence.

Usage: run, inputs will be cleaned while the window is open.
[README](https://github.com/valignatev/socd)
[Linux version](https://github.com/it0946/socd), [Keycode helper for config](/SocdMaker/socdmaker.exe)

#### [Blue](/Blue/blue.exe)
Rebinds left + right mouse buttons to keyboard inputs to avoid them being cleared on quitout on 1221.

Usage: run, inputs will be rebound while the window is open.

### [Assembly Manager](/AssemblyManager/Assembly_Manager.zip)
External program to manage mini savestates and assembly files across installations. 

Usage: Extract zip to a folder, run `manager.exe`. Add desired assemblies (renamed) to `/assemblies/`, add desired minisavestates files (renamed) to `/mini savestates/`.

### [Lumafly](https://themulhima.github.io/Lumafly/)
A fork of the Scarab mod installer for managing mods on 1.5.78.

Usage: Download, run `Lumafly.exe`.

## Game Modifications for primary patches

### 1.2.2.1

#### [ScreenShakeModifier](/ScreenShakeModifier/1221/Assembly-CSharp.dll)
Allows setting a ScreenShakeModifier in `Config.ini`

[with Modding API](/ScreenShakeModifier/1221-API/Assembly-CSharp.dll)

Installation: Replace `[game files]/hollow_knight_data/Managed/Assembly-CSharp.dll`.

#### [Minisavestates](https://github.com/Yurihaia/MiniSavestates/releases/download/1.2/Assembly-CSharp.dll)
Allowed for IL runs, allows reloading a single savestate. 

Installation: Replace `[game files]/hollow_knight_data/Managed/Assembly-CSharp.dll`.

#### [Modding API](/Mods/1221/Modding%20API/Assembly-CSharp.dll)
Required for all mods listed below. Must not be enabled for run submissions.

Installation: Replace `[game files]/hollow_knight_data/Managed/Assembly-CSharp.dll`.

##### [Debug Mod](https://github.com/SkeppysFlipFlops/DebugMod-1/releases/download/1.5.8/DebugMod.dll)
Primary practice mod: press F1 to open the debug menu.

Installation: Place in `[game files]/hollow_knight_data/Managed/Mods`.

##### [Benchwarp](/Mods/1221/Benchwarp.zip)
Allows warping to any bench in the game.

Installation: Unzip files to `[game files]/hollow_knight_data/Managed/Mods`.

##### [HKTimer](https://github.com/Schyvun/HollowKnight-Timer/releases/download/v0.1.1/Managed.zip)
Adds an in-game timer with settable scene and position triggers for precise room timings.

Installation: Unzip files to `[game files]/hollow_knight_data/Managed/Mods`.

### 1.4.3.2

#### [LoadNormaliser](https://github.com/Schyvun/HKCP_LoadNormaliser/releases/download/1.1/1432.1578.1.2.3.5.LoadNormaliser.UI.zip)
Normalises loads to a given length; for use in races.

Installation: Unzip, select desired patch & length, rename to `Assembly-Csharp.dll` and replace `[game files]/hollow_knight_data/Managed/Assembly-CSharp.dll`.

##### [Debug Mod](https://github.com/TheMulhima/HollowKnight.DebugMod/releases/download/v1.4.10.1/DebugMod-1.4.zip)


### 1.5.78

#### [LoadNormaliser](https://github.com/Schyvun/HKCP_LoadNormaliser/releases/download/1.1/1432.1578.1.2.3.5.LoadNormaliser.UI.zip)
Normalises loads to a given length; for use in races.

Installation: Unzip, select desired patch & length, rename to `Assembly-Csharp.dll` and replace `[game files]/hollow_knight_data/Managed/Assembly-CSharp.dll`.

#### Practice mods

You should get 1578 mods using [Lumafly](https://themulhima.github.io/Lumafly/) - recommended practice mods are listed without installation instructions, except where unavailable on Lumafly.

##### Debug Mod
Primary practice mod: press F1 to open the debug menu.

##### Benchwarp
Allows warping to any bench in the game.

##### [FollowCam](https://github.com/pseudorandomhk/HollowKnight.FollowCam/releases/download/v1.0.0/FollowCam.zip)
Adds a picture-in-picture camera following the knight (like DebugMod's "Force Camera Follow") in the top right. Useful for glitched practice where the knight would not be visible.

Installation: Unzip files to `[game files]/hollow_knight_data/Managed/Mods/FollowCam/`.

## Game modifications for other patches

### 1.0.2.8
Mapi: https://github.com/pseudorandomhk/hk-modding-api/tree/1028
Debug Mod: https://github.com/pikachupower3/HollowKnight.DebugMod/tree/1028
SrQoL: https://github.com/pikachupower3/SpeedRunQoL/tree/1028
Benchwarp: https://github.com/pseudorandomhk/HollowKnight.BenchwarpMod/tree/1028
FollowCam: https://github.com/pseudorandomhk/HollowKnight.FollowCam/releases/download/v1.0.0/FollowCam_1028.zip

### 1.1.1.8
[Modding API](/Mods/1118/Modding%20API/Assembly-CSharp.dll)
[Debug mod](/Mods/1118/DebugMod.dll)

### 1.3.1.5
Mapi: https://github.com/pikachupower3/hk-modding-api/tree/1315
Debug Mod: https://github.com/pikachupower3/HollowKnight.DebugMod/tree/1315
SrQoL: https://github.com/pikachupower3/SpeedRunQoL/tree/1315
Benchwarp: https://github.com/pikachupower3/HollowKnight.BenchwarpMod/tree/1315