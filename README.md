# eqclientmod for EverQuest Titanium client
## solar@heliacal.net

This is a game mod implemented as a planted DLL file.  It works by wrapping an existing DLL the game already uses and because it's in the game directory it's loaded before the one in the system directory.

I use ancient Visual Studio 2005 to develop and build this mod which allows it to work even on old versions of Windows like 95 and 98.  If you want to compile it yourself, you can use newer tools and it will probably work,
but if you want to do it how I do, you should use Visual Studio 2005 and don't use newer APIs or language features.  The EverQuest client was written in the late 90s with tools of that era and the Titanium version is from 2005ish.

# Installation
To install just copy `winmm.dll` to the game directory (the directory that contains `eqgame.exe`).
To uninstall remove or rename `winmm.dll`.

Once the game runs the mod will create a config file named `eqclientmod.ini` which contains toggles for the included mods along with a brief description of what they do.

You can test that it's working by typing `/eqclientmod` in game which should give you a version string if the mod loaded properly.
