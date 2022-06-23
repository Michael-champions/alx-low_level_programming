#include "main.h"


/**
 *factorial - factorial of a given number
 *@n: input
 *Return: integer
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(1 - 1));
	}
}
}
