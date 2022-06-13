#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: string being printed
 *
 * Return: always 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0; s[i] != 0;)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
