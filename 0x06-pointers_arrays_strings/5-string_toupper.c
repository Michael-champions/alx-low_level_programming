#include "main.h"

/**
 * string_toupper - Changes all lowercase letters to uppercase
 *
 * @s: string to change
 *
 * Return: s
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
