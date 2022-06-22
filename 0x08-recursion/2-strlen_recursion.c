#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion -  function that returns the length of a string
 * @s: input
 *
 * Return: always 0
 */
int _strlen_recursion(char *s)
{
	int strlen = 0;

	if (*s != '\0')
	{
		return (strlen + _strlen_recursion(strlen + 1));
	}
	return (0);
}
