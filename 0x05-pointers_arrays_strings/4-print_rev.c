#include "main.h"

#include <string.h>

/**
 * print_rev - prints the string in reverse
 * follow by '\n'
 *@s: declaration of s and paramters for the function
 * Return: always 0
 */
void print_rev(char *s)
{
	int i, c = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		c++;
	}
	for (i = c - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
