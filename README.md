# cpp-base64

Simple base64 encoder and decoder. Accepts input from STDIN and outputs to STDOUT.

The master branch is unmodified from the forked project, use the other branches.
Original by [René Nyffenegger](https://renenyffenegger.ch)

# Building on Windows

For Windows there is a branch with a **Visual Studio 2019** solution:
```
$ git checkout visual-studio
```
Then open **cpp-base.sln**

# Building on Linux/Unix
This project was created on Windows and ported to **CMake** via Visual Studio for compatibility, using the Windows Subsystem for Linux. To get the CMake port, change to the cmake branch:
```
$ git checkout cmake
```
