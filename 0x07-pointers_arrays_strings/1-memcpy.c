#include "main.h"

/**
 * *_memcpy - copies memory area
 *
 * @dest: pointer to copy to
 *
 * @src: pointer to copy from
 *
 * @n: avaalable memory
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int goods;

	for (goods = 0; goods < size; goods++)
		*(dest + goods) = *(dest + src);

	return (dest);
}
