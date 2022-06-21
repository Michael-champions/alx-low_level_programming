#include "main.h"

/**
 * _strpbrk - return pointer to byte in s that matches a byte in accept
 * @s: string to search
 * @accept: target matches
 *
 * Return:a function that searches a string for any of a set of bytes
 */

char *_strpbrk(char *s, char *accept);
{
	int x = o, i;

	while (s[x] != '\0')

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[x] == accept[i])
			{
				s = &s[x];
				return (s);
			}
			i++;
		}
	return (NULL);
}
