#include "main.h"
#include <string.h>

/**
 * reverse_array - Reverses contents of an array of integers
 *
 * @a:array
 *
 * @n: size of thr element of the array in bytes
 *
 * Description: return the required result
 *
 * Return: always 0
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int x;

	for (i = 0; i < n--; i++)
	{
		x = a[i];
		a[i] = a[n];
		a[n] = x;
	}
}
