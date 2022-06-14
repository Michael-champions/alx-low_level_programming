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
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar(10);
}
