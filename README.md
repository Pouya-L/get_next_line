# get_next_line

## Project Overview
This project involves creating a function that allows reading a line ending with a newline character (`'\n'`) from a file descriptor without prior knowledge of its size. The primary goals include learning the highly interesting concept of static variables in C programming, gaining a deeper understanding of allocations (whether on the stack or heap memory), manipulating and understanding the lifecycle of a buffer, and grappling with the unexpected complexities associated with the use of static variables. Through this project, you'll delve into how files are opened, read, and closed in an operating system, as well as how they are interpreted by a programming language for further analysis. This task is crucial for future programmers, as file manipulation is fundamental to data management and persistence.

## Getting Started

### Usage
To use get_next_line in your program, include get_next_line.h in your source file:

```
#include "get_next_line.h"
```

Then, compile your program with get_next_line:
```
gcc -Wall -Wextra -Werror -o your_program your_program.c get_next_line.c
```
Here’s an example of how to use get_next_line in your code:
```
int main(void)
{
    int fd = open("yourfile.txt", O_RDONLY);
    char *line;

    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s\n", line);
        free(line);
    }
    close(fd);
    return 0;
}
```

[![forthebadge](https://forthebadge.com/images/badges/made-with-c.svg)](https://forthebadge.com) [![forthebadge](https://forthebadge.com/images/badges/built-with-love.svg)](https://forthebadge.com)
