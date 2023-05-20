# SCC: Simple Self-Compiling C Compiler

SCC is a simple, self-compiling C compiler designed to work on x86_64 machines. It is implemented entirely in the C programming language, allowing it to compile its own source code. With SCC, you can compile and run C programs on any Linux machine supporting x86_64 architecture.

## Features

- Self-compiling: SCC is capable of compiling its own source code, making it self-contained and self-replicating.
- C language support: It supports a subset of the C programming language, allowing you to write and compile C programs.
- x86_64 compatibility: SCC is specifically designed to work on machines with the x86_64 architecture, ensuring compatibility with modern Linux systems.
- Simple and lightweight: SCC aims to be a minimalistic and straightforward C compiler, providing essential functionalities without unnecessary complexities.
- Command-line interface: You can interact with SCC through a command-line interface, making it convenient to compile and run C programs.

## Getting Started

To use SCC on your Linux machine, follow these steps:

1. Clone the SCC repository to your local machine:
```
git clone https://github.com/lvntky/SCC.git
```
2. Change to the SCC directory and build from source:
```
cd SCC
cmake ./
make
```
3. Once the compilation process is complete, you can use SCC to compile C programs:
```
$ ./scc source_file.c -o output_file
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

To compile this program using SCC, run the following command:

```
$ ./scc hello.c -o hello
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

Contributions to SCC are welcome! If you want to contribute to the project, please follow these guidelines:
1. Fork the repository on GitHub.
2. Create a new branch with a descriptive name for your feature or bug fix.
3. Make your changes and commit them with clear messages.
4. Push your changes to your forked repository.
5. Submit a pull request, explaining the purpose and changes of your contribution.

## License

SCC is licensed under the MIT License. Feel free to use, modify, and distribute it according to the terms of the license.

## Acknowledgements

SCC is inspired by various open-source C compilers and the passion of the programming community. I would like to express my gratitude to all the contributors and maintainers of the projects that have influenced SCC.

## Contact

If you have any questions, suggestions, or feedback regarding SCC, please contact the project maintainer at leventkayadev@gmail.com 
