# Hollow Knight Speedrun Community: Resources

This repository contains persistent links and file downloads for various resources used for Hollow Knight Speedrunning.

Most programs listed here are not signed, and so Windows will initially show `Windows protected your PC` - to continue to run, click `More info`, then `Run anyway`.

## Assemblies

These are replacements for your game's main assembly (at `[game files]/hollow_knight_Data/Managed/Assembly-CSharp.dll`). Ensure the name of the file is the same - remove the trailing `(1)` if present after download.

These assemblies may not be legal for your run submission: check the notes on each assembly. You can restore your vanilla assembly at any time in Steam using `Properties > Installed Files > Verify Integrity of Game Files`.

### ScreenShakeModifier

    Legal for all runs

Backports 1.5's configurable screenshake to previous patches, to allow adjusting or disabling screenshake entirely. To modify, edit `[save files]/screenShakeModifier.json` (will be created on first run).

- [1.2.2.1](/ScreenShakeModifier/1221/Assembly-CSharp.dll)
    - [Linux](/ScreenShakeModifier/1221-Linux/Assembly-CSharp.dll)
- [1.4.3.2](/ScreenShakeModifier/1432/Assembly-CSharp.dll)

### LoadNormaliser

    Legal for races - runs completed during a race may be submitted.

Standardises loads to the same length - used for races. Not recommended outside of races as it interferes with room cycles.

- [1.4.3.2 & 1.5.7.8](https://github.com/Schyvun/HKCP_LoadNormaliser/releases/download/1.1/1432.1578.1.2.3.5.LoadNormaliser.UI.zip)

### LoadExtender

    Legal for AG and NMMS runs - NOT legal for NMG runs.

Extends loads by a flat 1s to allow use of load dependent glitches if your loads are too fast.

- [1.0.2.8](/Mods/1028/Load%20Extender/Assembly-CSharp.dll)

### MiniSavestates

    Legal only for Individual Level runs (where the savestate is only used outside the scope of the Level)

Allows use of a single savestate, useful for quickly resetting ILs such as Path of Pain.

- 1.2.2.1 (Unzip to `[game files]/hollow_knight_Data/Managed`):
    - [Windows](https://github.com/hk-speedrunning/MiniSavestates/releases/download/v1.0.0-hk1.4.3.2/minisavestates.v1.0.0-hk1.4.3.2.windows.zip)
    - [Linux](https://github.com/hk-speedrunning/MiniSavestates/releases/download/v1.0.0-hk1.4.3.2/minisavestates.v1.0.0-hk1.4.3.2.linux.zip)
    - [MacOS](https://github.com/hk-speedrunning/MiniSavestates/releases/download/v1.0.0-hk1.4.3.2/minisavestates.v1.0.0-hk1.4.3.2.macos.zip)
- 1.4.3.2 (Unzip to `[game files]/hollow_knight_Data/Managed`):
    - [Windows](https://github.com/hk-speedrunning/MiniSavestates/releases/download/v1.0.0-hk1.5.78.11833/minisavestates.v1.0.0-hk1.5.78.11833.windows.zip)
    - [Linux](https://github.com/hk-speedrunning/MiniSavestates/releases/download/v1.0.0-hk1.2.2.1/minisavestates.v1.0.0-hk1.2.2.1.linux.zip)
    - [MacOS](https://github.com/hk-speedrunning/MiniSavestates/releases/download/v1.0.0-hk1.2.2.1/minisavestates.v1.0.0-hk1.2.2.1.macos.zip)
- 1.5.78 (Unzip to `[game files]/hollow_knight_Data/Managed`):
    - [Windows](https://github.com/hk-speedrunning/MiniSavestates/releases/download/v1.0.0-hk1.5.78.11833/minisavestates.v1.0.0-hk1.5.78.11833.windows.zip)
    - [Linux](https://github.com/hk-speedrunning/MiniSavestates/releases/download/v1.0.0-hk1.5.78.11833/minisavestates.v1.0.0-hk1.5.78.11833.linux.zip)
    - [MacOS](https://github.com/hk-speedrunning/MiniSavestates/releases/download/v1.0.0-hk1.5.78.11833/minisavestates.v1.0.0-hk1.5.78.11833.macos.zip)

### Modding API

    Not legal for any runs

Allows loading mods - most importantly DebugMod, the most versatile practice tool.

- [1.0.2.8](https://github.com/pseudorandomhk/hk-modding-api/releases/download/1.0.2.8-74/OutputFinal.zip) (Unzip to `[game files]/hollow_knight_Data/Managed`)
- [1.1.1.8](/Mods/1118/Modding%20API/Assembly-CSharp.dll)
- [1.2.2.1](/Mods/1221/Modding%20API/Assembly-CSharp.dll)
    - [Linux](/Mods/1221/Modding%20API%20Linux/Assembly-CSharp.dll)
- [1.2.2.1 (with ScreenShakeModifier)](/ScreenShakeModifier/1221-API/Assembly-CSharp.dll)
    - [Linux](/ScreenShakeModifier/1221-API-Linux/Assembly-CSharp.dll)
- [1.3.1.5](https://github.com/pikachupower3/hk-modding-api/releases/download/1.3.1.5-74/OutputFinal.zip) (Unzip to `[game files]/hollow_knight_Data/Managed`)
- [1.4.3.2]() <!-- TODO: Placeholder -->
- [1.4.3.2 (with ScreenShakeModifier)](/ScreenShakeModifier/1432-API/Assembly-CSharp.dll)
- 1.5.78 - use [Lumafly](#lumafly)

## Mods

These mods all require the [Modding API](#modding-api), and as such are **_not permitted for use in runs._**

Where the download is a `.zip` archive, extract the files to `[game files]/hollow_knight_Data/Managed/Mods/[mod name]` (create this folder if it does not exist). Where the download is a `.dll` file, simply place in `[game files]/hollow_knight_Data/Managed/Mods`.

If playing on 1.5.78, use [Lumafly](#lumafly) to install and manage mods.

### DebugMod

The most important practice mod; allows use of savestates, quickly managing acquired skills & charms, noclip, infinite health/soul and more.

- [1.0.2.8](https://github.com/pikachupower3/HollowKnight.DebugMod/releases/download/v1.4.10.3/DebugMod_1028.zip)
- [1.1.1.8](/Mods/1118/DebugMod.dll)
- [1.2.2.1](https://github.com/magneticpizza/DebugMod/releases/latest/download/Managed.zip)
    - Requires extracting to your `Managed` folder.
    - Also requires extracting to your `Managed` folder.
    - WARNING: on new installs this version will not work, use [this version](https://github.com/SkeppysFlipFlops/DebugMod/releases/download/1.5.12/DebugMod.dll) first.
- [1.3.1.5](https://github.com/pikachupower3/HollowKnight.DebugMod/releases/download/v1.4.10.3/DebugMod_1315.zip)
- [1.4.3.2]()
- 1.5.78 - use [Lumafly](#lumafly)

#### SpeedrunQol

A debug addon that adds additional keybinds for useful practice functions, including a quick Radiance reload, forcing an Uumuu extra attack and others (see [README](https://github.com/TheMulhima/SpeedRunQoL#readme)).

- [1.0.2.8](https://github.com/pikachupower3/SpeedRunQoL/releases/download/v0.61/SpeedRunQoL_1028.zip)
- [1.3.1.5](https://github.com/pikachupower3/SpeedRunQoL/releases/download/v0.61/SpeedRunQoL_1315.zip)
- 1.5.78 - use [Lumafly](#lumafly)

### Benchwarp

Allows warping to any bench in the game, useful for quickly getting to different locations.

(NB: on 1.5 the bench names default to your game language - to keep it in English, toggle `Options > Mods > Benchwarp > Override Localization`)

- [1.0.2.8](https://github.com/pseudorandomhk/HollowKnight.BenchwarpMod/releases/download/v3.2.4-1028/Benchwarp.dll)
- [1.2.2.1](/Mods/1221/Benchwarp.zip)
- [1.3.1.5](https://github.com/pikachupower3/HollowKnight.BenchwarpMod/releases/download/v3.2.3/Benchwarp_1315.zip)
- 1.5.78 - use [Lumafly](#lumafly)

### HKTimer

Adds an in-game timer with settable scene and position triggers for precise room timings.

- [1.2.2.1](https://github.com/Schyvun/HollowKnight-Timer/releases/download/v0.1.1/Managed.zip) (Unzip to `[game files]/hollow_knight_Data/Managed`)
- 1.5.78 - use [Lumafly](#lumafly)

### FollowCam

Adds a picture-in-picture camera following the knight (like DebugMod's "Force Camera Follow") in the top right. Useful for glitched practice where the knight would not be visible.

- [1.0.2.8](https://github.com/pseudorandomhk/HollowKnight.FollowCam/releases/download/v1.0.0/FollowCam_1028.zip)
- [1.5.78](https://github.com/pseudorandomhk/HollowKnight.FollowCam/releases/download/v1.0.0/FollowCam.zip) (Unzip files to `[game files]/hollow_knight_Data/Managed/Mods/FollowCam/`)

## External resources

### Legal macro programs

The following are the macro programs legal for use in runs.

#### [OverBind](https://github.com/cjonas1999/OverBind/releases/latest)

Allows binding keyboard inputs to a virtual controller, as well as supporting SOCD cleaning (see below)
[README](https://github.com/cjonas1999/OverBind)

#### [SOCD Cleaner](https://github.com/valignatev/socd/releases/latest)

Overrides the default left+right behaviour for the most recently pressed key to take precedence.

Usage: run, inputs will be cleaned while the window is open.\
[README](https://github.com/valignatev/socd)\
[Linux version](https://github.com/it0946/socd), [Keycode helper for config](/External%20Tools/SocdMaker/socdmaker.exe)

#### [Blue](/External%20Tools/Blue/blue.exe)

Rebinds left + right mouse buttons to keyboard inputs to avoid them being cleared on quitout on 1221.

Usage: run, inputs will be rebound while the window is open.

#### [Turquoise](/External%20Tools/Turquoise/turquoise.exe)

As above, but includes side buttons. Use enter to select on menus.

Usage: run, inputs will be rebound while Hollow Knight is focused & the script is running in your system tray (Look for the green H icon)

#### [KeyboardToClick](/External%20Tools/KeyboardToClick/KeyboardToClick.ahk)

An [AutoHotKey](/External%20Tools/AutoHotKey/README.md) script to rebind keyboard keys to mouse clicks. May be used to allow rapid double clicking.

Usage: Install AutoHotKey, run script. Inputs will be rebound until the script is closed from the system tray.

### [Assembly Manager](/External%20Tools/AssemblyManager/Assembly_Manager.zip)

External program to manage mini savestates and assembly files across installations.

Usage: Extract zip to a folder, run `manager.exe`. Add desired assemblies (renamed) to `/assemblies/`, add desired minisavestates files (renamed) to `/mini savestates/`.

### [Lumafly](https://themulhima.github.io/Lumafly/)

A fork of the Scarab mod installer for managing mods on 1.5.78.

Usage: Download, run `Lumafly.exe`.

## [Livesplit](http://livesplit.org/) and related tools

The primary timer application, required for Time Without Loads. Also see the [Focused Hotkeys](https://github.com/Dalet/LiveSplit.FocusedHotkeys) component.

### [HKSplitMaker](https://hksplitmaker.com/)

Provides a simple interface for creating splits with automatically synchronised icons & autosplit triggers. Also holds a large list of pre-made category configurations & related route notes.
