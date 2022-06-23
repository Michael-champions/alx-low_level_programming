#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: input
 * @i: iteration
 *
 * Return: success
 */

int _sqrt_recursion(int n, int i)
{
	int square = i * i;

	if (square > n)
	{
		return (-1);
	}
	else if (square == n)
	{
		return (1);
	}
	else
	{
		return (_sqrt_recursion(n, i * i));
	}
}
