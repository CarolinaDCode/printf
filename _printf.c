#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"
/**
 *_printf -  function to print
 *@format:pointer char
 *Return: value
 */
int _printf(const char *format, ...)
{
	int i = 0, e = 0, len = 0;
	char letter[100], *ptr_char;
	va_list arguments;

	if (format == NULL)
		return (-1);
	va_start(arguments, format);
	if (letter == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			letter[len++] = format[i];
		else
		{
			i++;

			if (format[i] == '\0')
			{
				write(1, letter, len);
				return (-1);
			}
			if (format[i] == '%')
				letter[len++] = '%';
			ptr_char = convertion(format[i], arguments);
			if (format[i] == 'c' && ptr_char[0] == '\0')
				letter[len++] = 0;
			if (ptr_char != NULL)
			{
				for (e = 0; ptr_char[e] != '\0'; e++)
					letter[len++] = ptr_char[e];
			}
		}
	}
	free(ptr_char);
	va_end(arguments);
	write(1, letter, len);
	return (len);
}

/**
 *func_type - function for a structure;
 *@s: s
 *Return: value
 */
char *(*func_type(char s))(va_list)
{
	int i;
	t_Date type[] = {
		{'d', func_integer},
		{'i', func_integer},
		{'c', func_character},
		{'s', func_string},
		{'\0', NULL}
	};

	for (i = 0; type[i].type_impresion != '\0'; i++)
	{
		if (type[i].type_impresion == s)
		{
			return (type[i].function);
		}
	}
	return (0);
}

/**
 *convertion - function that brings the value that each specifier has.
 *@format: format
 *@args: args
 *Return: char.
 */
char *convertion(char format, va_list args)
{
	char *(*func)(va_list);

	func = func_type(format);
	if (func != NULL)
	{
		return (func(args));
	}
	return (0);
}
