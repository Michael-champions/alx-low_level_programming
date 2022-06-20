#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 *
 * @s: pointer to be filled
 *
 * @b: character to fill the area with
 *
 * @n: memory area
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int product;

	for (product = 0; product < n; product++)
	{
		s[product] = b;
	}
	return (s);
}
