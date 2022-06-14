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
	int i, n;

	n = strlen(s);
	for (i = n - 1; i => 0; i++)
	{
		_putchar(s[i]);
	}
}
