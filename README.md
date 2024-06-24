# dennis: Simple Self-Compiling C Compiler

dennis is a simple, self-compiling C compiler designed to work on x86_64 machines. It is implemented entirely in the C programming language, allowing it to compile its own source code. With dennis, you can compile and run C programs on any Linux machine supporting x86_64 architecture.

## Features

- Self-compiling: dennis is capable of compiling its own source code, making it self-contained and self-replicating.
- C language support: It supports a subset of the C programming language, allowing you to write and compile C programs.
- x86_64 compatibility: dennis is specifically designed to work on machines with the x86_64 architecture, ensuring compatibility with modern Linux systems.
- Simple and lightweight: dennis aims to be a minimalistic and straightforward C compiler, providing essential functionalities without unnecessary complexities.
- Command-line interface: You can interact with dennis through a command-line interface, making it convenient to compile and run C programs.

## Getting Started

To use dennis on your Linux machine, follow these steps:

1. Clone the dennis repository to your local machine:
```
git clone https://github.com/lvntky/dennis.git
```
2. Change to the dennis directory and build from source:
```
cd dennis
cmake ./
make
```
3. Once the compilation process is complete, you can use dennis to compile C programs:
```
$ ./dennis source_file.c -o output_file
```

## Example

Consider a simple C program named `hello.c`:

```c
#include <stdio.h>

int main() {
    printf("Hello, world!\n");
    return 0;
}
```

To compile this program using dennis, run the following command:

```
$ ./dennis hello.c -o hello
```

This will generate an executable file named hello. To execute the compiled program, use the following command:

```
$ ./hello
```

The output should be:

```
Hello, world!
```

## Contributing

Contributions to dennis are welcome! If you want to contribute to the project, please follow these guidelines:
1. Fork the repository on GitHub.
2. Create a new branch with a descriptive name for your feature or bug fix.
3. Make your changes and commit them with clear messages.
4. Push your changes to your forked repository.
5. Submit a pull request, explaining the purpose and changes of your contribution.

## License

dennis is licensed under the MIT License. Feel free to use, modify, and distribute it according to the terms of the license.

## Acknowledgements

dennis is inspired by various open-source C compilers and the passion of the programming community. I would like to express my gratitude to all the contributors and maintainers of the projects that have influenced dennis.

## Contact

If you have any questions, suggestions, or feedback regarding dennis, please contact the project maintainer at leventkayadev@gmail.com 
