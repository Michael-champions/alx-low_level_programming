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
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
