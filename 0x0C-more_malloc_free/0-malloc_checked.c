#include "main.h"

#include <stdio.h>

#include <stdlib.h>

/**
 *malloc_checked -> a function that allocates memory using
 *
 * @b: size of the memory
 *
 * Return:  a pointer to the allocated memory
 * if malloc fails, the malloc_checked function should
 * cause normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (p);
}
