#ifndef HOLBERTON_H
#define HOLBERTON_H
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
char *(*func_type(char s))(va_list);
char *convertion(char format, va_list args);
char *func_integer(va_list args);
char *func_character(va_list args);
char *func_string(va_list args);
#endif
