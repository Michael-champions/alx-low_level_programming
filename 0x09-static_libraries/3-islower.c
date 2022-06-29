#include "main.h"

/**
 * _islower - checks for lowercase
 *
 *  @c: the character to check
 *
 *  Return: 1 if it is lowercase and return 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
