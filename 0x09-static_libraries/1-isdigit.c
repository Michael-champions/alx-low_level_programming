#include "main.h"

/**
 *  _isdigit - checks for a digit
 *
 *  @c: checks for char
 *
 * Return: 1 if true, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
