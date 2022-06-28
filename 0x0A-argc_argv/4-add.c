#include <stdio.h>

#include <stdlib.h>
#include <ctype.h>
/**
 * _isnumber - checks if string is a number
 *
 * @s: string
 *
 *
 * Return: always 0
 */

int _isnumber(char *s)
{
	int i, check, d;

	i = 0, d = 0, check = 1;

	if (*s == '-')
		i++;

	for (; *(s + i) != 0; i++)

	{
		d = isdigit(*(s + i));
		if (d == 0)

		{
			check = 0;
			break;
		}
	}
	return (check);
}
