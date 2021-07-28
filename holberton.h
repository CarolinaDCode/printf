#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>

/**
 *struct typeDate_impresion - typeDate_impresion
 *@type_impresion: operator
 *@function: pointer a function
 */

struct typeDate_impresion
{
	char  type_impresion;
	char  *(*function)(va_list);
};

typedef struct typeDate_impresion t_Date;

int _printf(const char *format, ...);
int print(char format, va_list args, char letter[]);
void check_letter(char letter[], int *len);
void print_letter(char letter[], int *len);
char *(*func_type(char s))(va_list);
char *convertion(char format, va_list args);

char *func_integer(va_list args);
char *func_character(va_list args);
char *func_string(va_list args);
char *func_unsint(va_list args);
char *func_binary(va_list args);
char *func_octonal(va_list args);
char *func_hexadmin(va_list args);
char *func_hexadmay(va_list args);
char *func_stringup(va_list args);

#endif
