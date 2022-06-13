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

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
