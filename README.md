# get_next_line

## Project Overview
This project involves creating a function that allows reading a line ending with a newline character (`'\n'`) from a file descriptor without prior knowledge of its size. The primary goals include learning the highly interesting concept of static variables in C programming, gaining a deeper understanding of allocations (whether on the stack or heap memory), manipulating and understanding the lifecycle of a buffer, and grappling with the unexpected complexities associated with the use of static variables. Through this project, you'll delve into how files are opened, read, and closed in an operating system, as well as how they are interpreted by a programming language for further analysis. This task is crucial for future programmers, as file manipulation is fundamental to data management and persistence.

## Getting Started

### Compiling
Run the following commands:

#### To compile
```
make
```
#### To remove objects
```
make clean
```
#### To remove objects and the binary file (program)
```
make fclean
```
#### To re-compile
```
make re
```
#### To use it in your program
By including `ft_printf.h` in your header file, you enable the usage of this function in your main program.
