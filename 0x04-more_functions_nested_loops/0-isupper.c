#include "main.h"

/**
 * _isupper - check for upppercase character
 * @c: c is the character
 *
 * Return: 1 if c is uppercase and 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
