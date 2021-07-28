# _Printf
It is the first low-level language programming project written in C language. This project represents one of the main output functions of the C language. The development of this project was achieved based on the knowledge acquired during our first stage, as students. from "Holberton" from cohort 15.

## Contenido
<!-- toc -->

- [Prototype](#Prototype)
- [File Description](#File-Description)
- [Project Requirements](#Project-Requirements)
- [Authorized functions and macros](#Authorized-functions-and-macros)

<!-- tocstop -->
# Files

|         section         | Files                                          | Description                                                  |
| :--------------------: | :--------------------------------------------- | ------------------------------------------------------------ |
|   [📌](#_printf.c)      | [printf.c](./_printf.c)                         | Principal function `_printf`.                                |
|   [📌](#holberton.c)    | [holberton.h](./holberton.c)                   | Header file that contains the prototypes of each function and structure. |
|   [📌](#by_printf.c)    | [by_printf.c](./by_printf.c)                             | function that prints a string according to each specifier.   |
|   [📌](#type_imp.c)     | [type_imp.c](./type_imp.c)                 | Functions that convert arguments to string according to the following specifiers: d, i, c, s, and b.|
|   [📌](#type_imp2.c)    | [type_imp2.c](./type_imp2.c)                 | Functions that convert arguments to string according to the following specifiers: u, o, x, and X.|


## Printf

file: [printf.c](./_printf.c)

| Function | Details                                               |
| -------: | ----------------------------------------------------- |
|  _printf | transports data from memory to screen |



[back to files](#Files)



## holberton.c

file: [holberton.c](./holberton.c)


| Function | Details                                  |
| -------: | ---------------------------------------- |
|     holberton.h | Header file containing C function prototypes and macro definitions. |



[back to files](#Files)

## by_printf.c

file: [by_printf.c](./by_printf.c)


| Function | Details                                                      |
| ---------: | ------------------------------------------------------------ |
|  print | function that prints a string according to each specifier that is included in a structure. |
| check_letter | Function that verifies that the maximum number of characters has been reached to print it and then reset the buffer.  |
|    print_letter | Function that prints the characters in the buffer being greater than zero and regardless of the maximum amount. |


[back to files](#Files)

## type_imp.c

file: [type_imp.c](./type_imp.c)


|    Function | Details                                    |
| ----------: | ------------------------------------------ |
| func_integer | function that converts each digit of a number into a character. |
| func_character | function prints a single character   |
| func_string | function that counts the characters of a text string until it finds a null value.  |
| func_binary | The function that converts a positive natural number to a binary number as a string. |

[back to files](#Files)



## type_imp2.c

file: [type_imp2.c](./type_imp2.c)


| Function | Details                            |
| -------: | ---------------------------------- |
| func_unsint | function that converts any natural number to a positive number. |
| func_octonal | Function that converts a natural number to an octagonal number. |
| func_hexadmin | Function that converts a natural number to a hexadecimal number with lowercase letters. |
| func_hexadmay | Function that converts a natural number to a hexadecimal number with uppercase letters. |


[back to files](#Files)


## Project Requirements
- All your files will be compiled on Ubuntu 20.04 LTS
- Everything will be compiled using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89.
- Your code should use the Betty.
- It is not allowed to use global variables
- No more than 5 functions per file.

## Authorized functions and macros
- write (man 2 write)
- malloc (man 3 malloc).
- free (man 3 free).
- va_start (man 3 va_start).
- va_copy (man 3 va_copy).
- va_arg (man 3 va_arg).

# Authors

- John Chávez - [Github](http://github.com/jrichard1909) ,
- Diana Carhuamanta - [Github](https://github.com/CarolinaDCode)
