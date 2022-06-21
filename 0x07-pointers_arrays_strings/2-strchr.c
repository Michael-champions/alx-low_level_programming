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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}
