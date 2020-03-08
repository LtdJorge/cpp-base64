# cpp-base64

Simple base64 encoder/decoder. Accepts input from STDIN and outputs to STDOUT.

The master branch is unmodified from the forked project, use the other branches.
Original by [René Nyffenegger](https://renenyffenegger.ch)

# Building on Windows

For Windows there is a branch with a **Visual Studio 2019** solution:
```
$ git checkout visual-studio
```
Then open **cpp-base.sln** and compile the project. There are build configurations for 
| OS      | Arch | Config |
|---------|------|--------|
| Windows | x86  | Debug  |
| Windows | x86  | Release|
| Windows | x64  | Debug  |
| Windows | x64  | Release|
|   WSL   |   -  | Debug  |
|   WSL   |   -  | Release|
Copy the *.exe*s to a folder in your PATH.

# Building on Linux/Unix
This project was created on Windows and ported to **CMake** via Visual Studio for compatibility, using the Windows Subsystem for Linux. To get the CMake port, change to the cmake branch (A CMake install is **not** needed, just plain make):
```
$ git checkout cmake
```
Then enter the Cmake generated folder:
```
$ cd out/build/WSL-Release
```
Build the encoder:
```
$ make tobase64
```
Build the decoder:
```
$ make frombase64
```

**Install** the binaries:
```
$ sudo cp frombase64 /usr/bin
$ sudo cp tobase64 /usr/bin
```