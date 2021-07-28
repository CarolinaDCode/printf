#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *func_unsint - function that return a integer
 *@args: args
 *Return: char
 */

char *func_unsint(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int cont = 1, veces, i, e = 0;
	unsigned int numOriginal = n, divisor, uniq = 0;
	char *ptr_int;

	while (n > 9)
	{
		n = n / 10;
		cont++;
	}

	ptr_int = malloc(sizeof(char) * cont + 1);
	if (ptr_int == NULL)
		return (0);

	for (i = cont ; i > 0 ; i--)
	{
		divisor = 1;
		for (veces = 1; veces < i; veces++)
			divisor *= 10;

		uniq = (numOriginal / divisor) % 10;
		ptr_int[e++] = uniq + '0';
	}

	ptr_int[e] = '\0';

	return (ptr_int);
}

/**
 *func_octonal - function that return a integer
 *@args: args
 *Return: char
 */

char *func_octonal(va_list args)
{
	unsigned int c = va_arg(args, unsigned int);
	int i, len;
	unsigned int temp = c;
	char *octonal;

	for (len = 0; temp; len++)
		temp /= 8;

	if(c == 0)
		len = 1;

	octonal = malloc(len + 1);
	if (octonal == NULL)
		return (0);

	for (i = 1; i <= len; i++)
	{
		octonal[len - i] = (c % 8) + '0';
		c = c / 8;
	}
	octonal[len] = '\0';

	return (octonal);
}

/**
 *func_hexadmin - function that return a integer
 *@args: args
 *Return: char
 */

char *func_hexadmin(va_list args)
{
	int i, len, j;
	unsigned int c = va_arg(args, unsigned int);
	unsigned int temp = c;
	unsigned int hexadnum[6] = {10, 11, 12, 13, 14, 15};
	char hexadchar[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
	char *hexadmin;

	for (len = 0; temp; len++)
		temp /= 16;

	if (c == 0)
		len = 1;

	hexadmin = malloc(len + 1);
	if (hexadmin == NULL)
		return (0);

	for (i = 1; i <= len; i++)
	{
		if (c % 16 > 9)
		{
			for (j = 0; j < 6; j++)
			{
				if (hexadnum[j] == c % 16)
				{
					hexadmin[len - i] = hexadchar[j];
					break;
				}
			}
		}
		else
			hexadmin[len - i] = (c % 16) + '0';
		c = c / 16;
	}
	hexadmin[len] = '\0';

	return (hexadmin);
}

/**
 *func_hexadmay - function that return a integer
 *@args: args
 *Return: char
 */

char *func_hexadmay(va_list args)
{
	int i, len, j;
	unsigned int c = va_arg(args, unsigned int);
	unsigned int temp = c;
	unsigned int  hexadnum[6] = {10, 11, 12, 13, 14, 15};
	char hexadchar[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
	char *hexadmay;

	for (len = 0; temp; len++)
		temp /= 16;
	
	if (c == 0)
		len = 1;

	hexadmay = malloc(len + 1);
	if (hexadmay == NULL)
		return (0);

	for (i = 1; i <= len; i++)
	{
		if (c % 16 > 9)
		{
			for (j = 0; j < 6; j++)
			{
				if (hexadnum[j] == c % 16)
				{
					hexadmay[len - i] = hexadchar[j];
					break;
				}
			}
		}
		else
			hexadmay[len - i] = (c % 16) + '0';
		c = c / 16;
	}
	hexadmay[len] = '\0';

	return (hexadmay);
}

/**
 *func_stringup - function that return a integer
 *@args: args
 *Return: char
 */

char *func_stringup(va_list args)
{
	char *d_param, *param = va_arg(args, char *);
	int i, len = 0, cont = 0, j, c = 0, size = 0;
	char hexadchar[6] = {'A', 'B','C','D','E','F'};

	for(i = 0; param[i] != '\0'; i++)
	{
		size++;
		if (param[i] < 32 || param[i] >= 127)
			cont++;
	}

	d_param = malloc(sizeof(char) * size + 1 + (cont *3));
	if (d_param == NULL)
		return(0);

	for(i = 0; i < size; i++)
	{
		if (param[i] < 32 || param[i] >= 127)
		{
			c = param[i];
			d_param[len++] = 92;
			d_param[len++] = 'x';
			for (j = 1; j >= 0 ; j--)
			{
				if (c % 16 > 9)
					d_param[len + j] = hexadchar[(c % 16) - 10];
				else
					d_param[len + j] = (c % 16) + '0';
				c /= 16;
			}
			len += 2;
		}
		else
			d_param[len++] = param[i];
	}
	d_param[len] = '\0';

	return (d_param);
}
