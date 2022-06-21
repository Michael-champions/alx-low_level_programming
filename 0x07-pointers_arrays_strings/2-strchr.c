#include "main.h"
#include <stdio.h>
#define NULL 0

/**
 * _strsp - function that gets the length of a prefix substring
 *
 * @s: the string
 *
 * @c: the character to locate
 *
 * Return: a pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c);
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)

		if (s[i] == c)
		{
			return (s + i);
		}

	return ('\0');
}
