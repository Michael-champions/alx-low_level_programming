#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: n is the integer
 *
 * Return: 0
 *
 */

int print_last_digit(int n)
{
	int ldgt = n % 10;

	if (n < 0)
		ldgt = ldgt * -1;

	_putchar(ldgt + '0');
	return (ldgt);
}
