#include "main.h"

/**
 * print_sign -a function that prints the sign of a number.
 *
 * @n: n is an integer
 *
 * return: 1 if positive, -1 if nagative, 0 if zero,
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0);
		return (0);
	}
}
