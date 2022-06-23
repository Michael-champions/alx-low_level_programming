#include "main.h"


/**
 * _sqrt_recursion -  sqrt using recursion
 *
 * @n: parameter to be sqrt
 *
 * Return: sucess
 */

int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}

/**
 * _sqrt - function that returns the natural square root of a number
 *
 * @n: input
 * @i: iteration
 *
 * Return: success
 */

int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
	{
		return (-1);
	}
	else if (square == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt(n, i + 1));
	}
}

