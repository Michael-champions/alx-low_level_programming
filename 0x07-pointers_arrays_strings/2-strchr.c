#include "main.h"

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
	int i = 0;

	while (s[i] != '\0' && s[i] != c; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		else
	}
	return (NULL);

}
