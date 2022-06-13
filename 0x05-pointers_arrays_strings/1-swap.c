#include "main.h"

#include <stdio.h>

/**
 * swap_int - swap the valuses of two integers a and b
 *
 * @a: declaration of a and paramters for the function swap_int
 *
 * @b: declaration of b and paramters for the function swap_int
 *
 * Retrun: always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;

	*b = c;
}
