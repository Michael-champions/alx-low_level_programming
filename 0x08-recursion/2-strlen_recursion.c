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
	int str = 0;

	if (*s)
	{
		str+= _strlen_recursion(s + 1);
	}
	return (str);
}
