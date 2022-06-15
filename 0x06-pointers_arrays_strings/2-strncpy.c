#include "main.h"

#include <string.h>

/**
 * _strncpy - cpoies n bytes of src to the dest string
 *
 * @dest: destination
 *
 * @src: the src
 * @n: number of bytes
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)

		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
