#include "main.h"



/**
 * _strlen_recursion - Returns Length of String
 * @s: string param
 *
 * Return: lenght of a string
 */

int _strlen_recursion(char *s)
{
	s = "lpa\0";

	if (*s == '\0')
		return (0);
	s++;

	return (1 + _strlen_recursion(s));
}
