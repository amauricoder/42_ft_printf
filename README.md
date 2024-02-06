# ft_printf
![Banner](FT_PRINTF.png "ft_printf banner")

"The goal of this project is pretty straightforward: code a clone of printf()."

## Table of contents
- [Introduction](#introduction)
- [Usage](#usage)
- [Obligatory Convertions](#obligatory-convertions)
- [Makefile Overview](#makefile-overview)
- [License and Thoughtful Advice](#license-and-thoughtful-advice)

## Introduction
Ft_printf is a project from the common core curriculum of 42 school. The goal of this project is to code a clone of the libc library printf().
The printf() function in C is a widely used function for formatted output. It stands for "print formatted" and is primarily used to display data on the screen or write it to a file. The function takes a format string as its first argument, which can contain placeholders called format specifiers. These placeholders are replaced by the values of additional arguments provided to the function.
- Returns the number of characters printed, excluding the null byte used to terminate output to strings.
>The code was written according to the 42 norm (norminette) guidelines.

## Usage
1. Clone the repository
```bash
git clone git@github.com:amauricoder/42_ft_printf.git
```
2. Do make to compile the files
```bash
make
```
This will generate a libftprintf.a file in the root folder, this is the library containing the ft_printf().

3. Go to your header file and include the library
```bash
# include "ft_printf.h"
```
## Obligatory convertions
Those are the obligatory conversions requirements of the project - for more detail, check the [subject](subject/2-printf.pdf):
- %c Prints a single character.
- %s Prints a string (as defined by the common C convention).
- %p The void * pointer argument has to be printed in hexadecimal format. • %d Prints a decimal (base 10) number.
- %i Prints an integer in base 10.
- %u Prints an unsigned decimal (base 10) number.
- %x Prints a number in hexadecimal (base 16) lowercase format.
- %X Prints a number in hexadecimal (base 16) uppercase format.
- %% Prints a percent sign.

## Makefile Overview

In this project, the Makefile offers the following essential rules:
- **make**: Compiles the project to libftprintf.a.
- **make clean**: Cleans the directory by removing `.o` files, preserving `libftprintf.a`.
- **make fclean**: Completely cleans the directory by deleting both `.o` files and `libftprintf.a`.
- **make re**: Refreshes `libftprintf.a` by recompiling everything.

## License and Thoughtful Advice
[View License](LICENSE)

Stop deceiving yourself. 
Mere ability to copy code doesn't enhance your skills. This is outside the scope of school purposes. 
Everyone can be a "copy paster," but not everyone can be a programmer. Good luck!
