#include "main.h"

#include <stdio.h>

#include <stdlib.h>

/**
 * array_range -> a function that creates an array of integers.
 *
 * @min: minimal value
 *
 * @max: maximum value
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int size, i, j;
	int *p;

	if (min > max)
		return (0);

	if (max > min)
		size = max - min + 1;
	else if (max == min)
		size = 2;

	p = malloc(sizeof(int) * size);
	if (p == 0)
		return (0);

	for (i = 0, j = min; j <= max; i++, j++)
		p[i] = j;
	if (max == min)
		p[i] = max;
	return (p);
}
