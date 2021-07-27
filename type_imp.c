#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *func_integer - function that return a integer
 *@args: args
 *Return: char
 */
char *func_integer(va_list args)
{
	int n = va_arg(args, int), cont = 1, e = 0, temp = n, uniq = 0, divisor;
	unsigned int numOriginal;
	char *ptr_int;
	int veces, i;

	while (temp > 9 || temp < -9)
	{
		temp = temp / 10;
		cont++;
	}
	if (n < 0)
	{
		ptr_int = malloc(sizeof(char) * cont + 2);
		ptr_int[e] = '-';
		n = n * -1;
		e++;
	}
	else
		ptr_int = malloc(sizeof(char) * cont + 1);
	if (ptr_int == NULL)
		return (0);
	numOriginal = n;
	for (i = cont ; i > 0 ; i--)
	{
		divisor = 1;
		for (veces = 1; veces < i; veces++)
			divisor = divisor * 10;

		uniq = (numOriginal / divisor) % 10;

		ptr_int[e] = uniq + '0';
		e++;
	}
	ptr_int[e] = '\0';
	return (ptr_int);
}

/**
 *func_character - function that return a character
 *@args: args
 *Return: char
 */
char *func_character(va_list args)
{
	char param = va_arg(args, int);
	char *ptr_param;

	ptr_param = malloc(2);
	ptr_param[0] = param;
	ptr_param[1] = '\0';
	return (ptr_param);
}

/**
 *func_string - function that return a string
 *@args: args
 *Return: char
 */
char *func_string(va_list args)
{
	char *param = va_arg(args, char*);
	char *d_param;
	int i;
	int size = 0;

	if (param == NULL)
		param = "(null)";

	for (i = 0; param[i] != '\0'; i++)
		size++;

	d_param = malloc(sizeof(char) * size + 1);
	if (d_param == NULL)
		return (0);

	for (i = 0; i < size; i++)
		d_param[i] = param[i];

	d_param[i] = '\0';
	return (d_param);
}
