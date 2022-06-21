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
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)

	for (j = 0; accept[j] != '\0'; j++)

	if (s[i] == accept[j])

	return (s[i] != '\0' ? s + i : '\0');
}
