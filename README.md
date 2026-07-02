# Hello CPP

A simple C++ command-line application that greets a user by their provided name.

## Prerequisites

- A C++ compiler (e.g., GCC, Clang)
- [CMake](https://cmake.org/) (version 3.5 or higher)

## Building the Project

You can build the project using CMake. Follow these steps from the root of the project directory:

```bash
mkdir build
cd build
cmake ..
make
```

This will generate an executable named `hello` in the `build` directory.

## Usage

Run the executable and provide a name as an argument:

```bash
./hello <name>
```

### Example

```bash
$ ./hello Alice
Hello Alice
```

If you do not provide a name, the program will return an error:

```bash
$ ./hello
You need to enter a name.
```