#include "main.h"

/**
 * _strncat - appends src to the dest string
 *
 *  @dest: a destination
 *
 *  @src: the src
 *
 *   @n: number of bytes
 *
 *   Return: pointer to the destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x])
	{
		x++;
	}
	while (y < n && src[y] != 0)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = 0;
	return (dest);
}
