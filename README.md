# eqclientmod for EverQuest Titanium client
solar@heliacal.net

This is a game mod implemented as a planted DLL file.  It works by wrapping an existing DLL the game already uses and because it's in the game directory it's loaded before the one in the system directory.

I use ancient Visual Studio 2005 to develop and build this mod which allows it to work even on old versions of Windows like 95 and 98.  If you want to compile it yourself, you can use newer tools and it will probably work,
but if you want to do it how I do, you should use Visual Studio 2005 and don't use newer APIs or language features.  The EverQuest client was written in the late 90s with tools of that era and the Titanium version is from 2005ish.

# Installation
To install just copy `winmm.dll` to the game directory (the directory that contains `eqgame.exe`).
To uninstall remove or rename `winmm.dll`.

Once the game runs the mod will create a config file named `eqclientmod.ini` which contains toggles for the included mods along with a brief description of what they do.

You can test that it's working by typing `/eqclientmod` in game which should give you a version string if the mod loaded properly.

# Mods

### CPU High Speed Fix
CPU high clock speed overflow fix.  If you have a CPU that's more than 4.2 Ghz you probably need this to make the game run at the right speed.
This issue happens with all AMD Ryzen 7xxx and 9xxxx CPUs at least.  The game normally samples the TSC by using the `rdtsc` instruction.  This mod makes it use a modern API called `QueryPerformanceCounter`.

### Disable Gamma Change
The game has a gamma slider in it but it does it in a really annoying way that changes the desktop gamma.  It tries to restore it when the game exits but this doesn't always happen with multiple clients and crashes.
This mod disables the gamma functionality by detouring the function that would do this and instead doing nothing.  If you like the gamma, make sure you edit `eqclientmod.ini` and disable this mod.

### CommandHandler
This mod adds the extra command handling that some of the other hacks use but it's not strictly necessary to enable this to use the other hacks.  Basic commands included: /eqclientmod /crash

### Qeynos Citizen Female Model Fix
There is an error in the client that swaps race 71 Qeynos Citizen's female (gender 1) QCF and neuter (gender 2) QCN models.  This results in females falling back to using the default human model.
This hack swaps it back so it works correctly.

### Sleep Remover
This hack removes various Sleep() calls to speed up rendering and loading.

1.) RemoveBackgroundSleep - When the game is not the foreground focus, it inserts a 100ms sleep between each frame bringing the framerate way down.  This mod disables that so the game doesn't act any different when it's in the background.

2.) RemoveInterFrameSleep - The game contains an FPS limiter slider that goes from 10 to 100.  When it's set to 100 it's supposed to be unlimited, but there is always a minium of 1ms sleep between frames and this removes that.
This frame limiter is kind of bad how it's implemented as its resolution is limited to milliseconds and it sleeps for 1ms even if the framerate is lagging behind the target, causing jerky rendering and increased input latency.
This mod removes the minimum 1ms sleep and completely uncaps the framerate when the slider is set to 100.

3.) RemoveCharSelectSleep/RemoveCharCreateSleep - Character selection and character creation screens have a 10ms sleep between frames and this mod removes that.

4.) RemoveDisconnectedSleep - When using /quit or otherwise being disconnected there is a very long sleep, about 20 seconds total.  This mod removes that long sleep.

5.) RemoveLoadingSleep - There are various small sleeps interspersed during data file loading that can be removed to make the game load slightly faster.

6.) HighFPSPhysicsFix - This fixes an issue with gravity that happens as a result of using the RemoveInterFrameSleep mod.  The player can end up floating in mid air without falling back down after doing an in-place jump without this.

### Program Launch
This hack removes the requirement to pass the 'patchme' argument to the program to start it.

### Zone Version
This hack is for switching between the old and new versions of nektulos and lavastorm zones.  There are toggles in the INI file.  The mod works by intercepting the filenames for the new .eqg zone files and acting as if the file was not found.
This makes the game load the old s3d version of the zones which are still present in the client.

### Window Title
This hack renames the application window from EverQuest to Client1, Client2, etc depending on how many other windows are already open.  This is intended for macro software like hotkeynet and AutoHotKey to make it easier to search for the window.
