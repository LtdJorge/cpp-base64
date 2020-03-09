# cpp-base64

Simple base64 encoder/decoder. Accepts input from STDIN and outputs to STDOUT, specially useful for piping files.

Original by [René Nyffenegger](https://renenyffenegger.ch)

## Usage

### Encoding:
#### Try it with a *hello world*:
```
$ echo "hello world" | ./tobase64
aGVsbG8gd29ybGQ=
# On Windows use 'echo hello world|', because its echo implementation passes the quotation marks and whitespace.
```
#### Encode a file to base64:
```
$ cat ~/.basrc | ./tobase64 > mybase64file.txt
```

### Decoding:
#### Decode some text:
```
$ echo aGVsbG8gd29ybGQ= | ./frombase64
hello world
```

#### Decode a file:
```
$ cat ./mybase64file.txt | ./frombase64 > newbashrc.txt
$ diff -s mybase64file.txt ~/.bashrc
Files newbashrc.txt and /home/$USER/.bashrc are identical
```

## Building on Windows

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

## Building on Linux/Unix
Enter the Cmake generated folder:
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
