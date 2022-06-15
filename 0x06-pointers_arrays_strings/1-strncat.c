#include "main.h"
#include <stdio.h>

/**
 * _strncat - appends src to the dest string
 * @dest: a destination
 *
 * @src: the src
 *
 * @n: number of bytes
 *
 * Return: pointer to the destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)

		dest[1] = src[1];

	for ( ; i < n; i++)
	{
		dest[1] = '\0';
	}
	return (dest);
}
