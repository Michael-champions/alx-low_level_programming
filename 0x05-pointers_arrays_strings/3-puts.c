#include "main.h"

/**
 * _puts - > this is a function that puts
 * @str: a paramiter to put function
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
