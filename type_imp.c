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
	int n = va_arg(args, int);
	int cont = 1;
	unsigned int numOriginal;
	int uniq = 0;
	int divisor, veces, i;
	char *ptr_int;
	int e = 0;
	int temp = n;

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

/**
 *func_binary - function that return a integer
 *@args: args
 *Return: char
 */

char *func_binary(va_list args)
{
	int i, len;
	unsigned int c = va_arg(args, unsigned int);
	unsigned int temp = c;
	char *binary;

	for (len = 0; temp; len++)
		temp /= 2;

	binary = malloc(len + 1);
	if (binary == NULL)
		return (0);

	for (i = 1; i <= len; i++)
	{
		binary[len - i] = (c % 2) + '0';
		c = c / 2;
	}
	binary[len] = '\0';

	return (binary);
}
