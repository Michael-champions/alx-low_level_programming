#include "main.h"

/**
 * *_memcpy - copies memory area
 *
 * @dest: pointer to copy to
 *
 * @src: available memory
 *
 * Return: a pointer to  dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int goods;

	for (goods = 0; goods < n; goods++)
		*(dest + goods) = *(src + goods);

	return (dest);
}
