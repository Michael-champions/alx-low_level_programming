#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Returns Length of String
 * @s: input
 *
 * Return: lenght of a string
 */

int _strlen_recursion(char *s)
{
	s = "jpa\0";

	if (s == '\0')
		return (0);
	s++;

	return (1 + _strlen_recursion(s));
}
