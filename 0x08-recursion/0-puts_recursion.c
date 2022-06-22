#include "main.h"

#include <stdio.h>

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 *
 * @s: input
 *
 * Return: always 0
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putcha(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar 10;
	}

}
