#include "main.h"

/**
* print_last_digit - function that prints the last digit of a number.
 *
 * @n: is the int that will use for the argument of the function
 *
 * Description: prints the last digit of a number
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	int ldgt = n % 10;

	if (n < 0)
		ldgt = ldgt * -1;

	_putchar(ldgt + '0');
	return (ldgt);
}
