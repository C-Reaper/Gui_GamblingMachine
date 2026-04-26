# Project README

## Overview
This project is a simple gambling machine game developed in C. The game displays spinning reels when the spacebar or left mouse button is pressed, and resets when the enter key is pressed.

## Features
- Spinning reels with images of fruits.
- Ability to start and reset the game using keyboard inputs.

## Project Structure
```
<Project>/
├── build/              # .exe files produced by Main.c
├── src/                # Source code
│   ├── Main.c          # Entry point
│   └── *.h             # Standalone Header-based C-files, without *.c files that implement it
└── Makefile.linux      # Linux Build configuration
├── Makefile.windows    # Windows Build configuration
├── Makefile.wine       # Wine Build configuration
└── Makefile.web        # Emscripten Build configuration
```

### Prerequisites
- C/C++ Compiler and Debugger (GCC, Clang)
- Make utility
- Standard development tools
- Libraries needed:
  - X11 for Linux build (`libX11-dev`)
  - User32, Gdi32, Winmm for Windows and Wine builds

## Build & Run
### Linux
To build the project on Linux:
```sh
cd <Project>
make -f Makefile.linux all
```

To execute it:
```sh
make -f Makefile.linux exe
```

### Windows
For building and running on Windows, ensure you have a cross-compilation setup or use a virtual machine with the necessary tools installed.

To build the project for Windows:
```sh
cd <Project>
make -f Makefile.windows all
```

To execute it:
```sh
make -f Makefile.windows exe
```

### Wine
For building and running on Linux to target Windows:

To build the project using Wine:
```sh
cd <Project>
make -f Makefile.wine all
```

To execute it:
```sh
make -f Makefile.wine exe
```

### Webassembly (Emscripten)
For building a web version of the game:

To build the project for web using Emscripten:
```sh
cd <Project>
make -f Makefile.web all
```

To execute it, open `build/index.html` in a web browser.