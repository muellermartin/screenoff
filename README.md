screenoff
=========

screenoff is a really small command line tool to turn off the computer's screen.

Currently only Windows is supported.

Tested on Windows 7.

Compilation
-----------

The program is cross-compiled via [mingw-w64](http://mingw-w64.org/) on Mac OS X.
It should also build with any C++ compiler on Windows, too (untested).

To cross-compile, follow these steps:

1. Adjust the paths in the toolchain file to point to the cross-compiler.
2. Create a temporary build directory (e.g. `build`) in the source file tree and change into it.
3. Run cmake, e.g. via:

		cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_TOOLCHAIN_FILE=../cmake/Toolchain-x86_64-w64-mingw32.cmake

4. Run `make` or the according tool of your toolchain to compile the executable.
5. Optional: Run `make package` to create a ZIP file for distribution.

Installation
------------

Simply copy the executable `screenoff.exe` from the ZIP file into any directory and run it either directly or via a shortcut.

Credits
-------

- [Turn off display in Windows on command - Super User](https://superuser.com/questions/321342/turn-off-display-in-windows-on-command)
- [#PSTip How to switch off display with PowerShell - PowerShell Magazine](http://www.powershellmagazine.com/2013/07/18/pstip-how-to-switch-off-display-with-powershell/)
