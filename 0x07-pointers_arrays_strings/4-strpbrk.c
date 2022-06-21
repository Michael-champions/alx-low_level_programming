#include "main.h"

/**
 *_strpbrk - function that searches a string for
 * any of a set of bytes.
 *@s: input
 *@accept: input
 *
 * Return:a pointer to the byte in s
 *  that matches one of the bytes in accept,
 *  or NULL if no such byte is found
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
