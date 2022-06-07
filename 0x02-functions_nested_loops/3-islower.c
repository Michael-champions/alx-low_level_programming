#include "main.h"

/**
 * 3-islower.c - check for lowercase character
 *
 * Return: 1 if lowercase
 */

int _islower(int c)
{
	if (c => 97 && c <= 122)
		return (1);
	else
		return (0);
}
