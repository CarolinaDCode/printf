#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"
/**
 *print - function to print when the '%'
 *@format: format
 *@args: args
 *@letter: letter
 *Return: valor
 */
int print(char format, va_list args, char letter[])
{
	int lentotal = 0, e = 0, len2 = 0;
	char *ptr_char;

	if (format == '\0')
		return (-1);
	if (format == '%')
	{
		letter[len2++] = '%';
		lentotal++;
	}
	else
	{
		ptr_char = convertion(format, args);
		if (ptr_char)
		if (format == 'c' && ptr_char[0] == '\0')
		{
			letter[len2++] = 0;
			lentotal++;
		}
		if (ptr_char != NULL)
		{
			for (e = 0; ptr_char[e] != '\0'; e++)
			{
				check_letter(letter, &len2);
				letter[len2++] = ptr_char[e];
				lentotal++;
			}
			free(ptr_char);
		}
		else
		{
			letter[len2++] = '%';
			lentotal++;
			letter[len2++] = format;
			lentotal++;
		}
	}
	print_letter(letter, &len2);
	return (lentotal);
}

/**
 *check_letter - function that initializes the buffer
 *@letter: letter
 *@len: len
 *Return: value
 */
void check_letter(char letter[], int *len)
{
	if (*len == 1024)
	{
		write(1, &letter[0], *len);
		*len = 0;
	}
}

/**
 *print_letter - function that initializes and print
 *@letter: letter
 *@len: len
 *Return: value
 */

void print_letter(char letter[], int *len)
{
	if (*len > 0)
	{
		write(1, &letter[0], *len);
		*len = 0;
	}
}
