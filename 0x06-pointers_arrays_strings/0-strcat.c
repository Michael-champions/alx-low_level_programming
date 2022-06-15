#include "main.h"

#include <stdio.h>
/**
 * _strcat - appends src to the dest string
 *
 * @dest: destination
 * @src: the src
 *
 * Return: pointer to the destination
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;

	while (*(dest + i))
		i++;

	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
