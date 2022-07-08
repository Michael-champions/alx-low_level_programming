#include "variadic_functions.h"

#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 *
 * @n: The number of paramters passed to the function
 *
 * @...: A variable number of paramters to calculate the sum of.
 * Return: If n == 0 - 0
 *   Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list number;
	int sum;
	unsigned int x;

	x = 0;

	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	va_start(number, n);

	while (x < n)
	{
		sum = sum + va_arg(num, int);
		x++;
	}
	va_end(number);
	return (sum);
}
