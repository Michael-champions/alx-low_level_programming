#include "main.h"

#include <string.h>

/**
 * _strncpy - cpoies n bytes of src to the dest string
 *
 * @dest: destination
 *
 * @src: the src
 * @n: third argument
 * Description: return the required result
 *
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
