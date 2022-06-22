#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - a function that prints a string in reverse
 * @s: input
 *
 * Return: always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_print_rev_recursion(s + 1);
	}
	putchar (10);
}

