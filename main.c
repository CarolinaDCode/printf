#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	/*unsigned int ui;
	void *addr;*/
	int len = INT_MAX;
	int len2 = INT_MAX;
	int l1 = 0;
	int l2 = 0;

	len2 += printf("Let's try to pr%sintf a '' """""""" %%%%%  %imple &sentence.\n", "\\\\\\\\\\ dasdada dasdsad asdad", "aa");
	len += _printf("Let's try to pr%sintf a '' """""""" %%%%%  %imple &sentence.\n", "\\\\\\\\\\ dasdada dasdsad asdad", "aa");
	len += _printf("%chola\n", 0);
	len2 += printf("%chola\n", 0);
	len += _printf("String:[%s]\n", "I am a string !");
	len2 += printf("String:[%s]\n", "I am a string !");
	len += _printf("Length:[%d, %i]\n", len, len);
	len2 += printf("Length:[%d, %i]\n", len2, len2);
	l1 += _printf("a% \n");
	l2 += printf("a%   \n");
        /*l1 += _printf("[%i]\n", 1.1);
        l2 += printf("[%i]\n", 1.1);*/
	_printf("[%d, %i]\n", l1, l1);
	printf("[%d, %i]\n", l2, l2);


	return (0);
}
