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
	int len;

	for (len = 0; *s != '\0'; len++)
		s++;

	for (len = len; len != 0; len--)
		s--;
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
