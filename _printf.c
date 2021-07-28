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
	int i, len = 0, lentotal = 0, retlen = 0;
	char letter[1024];
	va_list arguments;

	if (format == NULL)
		return (-1);
	va_start(arguments, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			check_letter(letter, &len);
			letter[len++] = format[i];
			lentotal++;
		}
		else
		{
			i++;
			print_letter(letter, &len);
			while (format[i] == ' ')
				i++;
			retlen = print(format[i], arguments, letter);
			if (retlen == -1)
				return (-1);
			lentotal += retlen;
		}
	}
	va_end(arguments);
	write(1, letter, len);
	return (lentotal);
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
		{'b', func_binary},
		{'u', func_unsint},
		{'o', func_octonal},
		{'x', func_hexadmin},
		{'X', func_hexadmay},
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
