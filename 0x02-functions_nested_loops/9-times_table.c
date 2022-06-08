#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: 0
 */

void times_table(void)
{
	int a;
	int b;
	int sum;
	int product;
	int row;

	for (a = 0; a <= 9; b++)
	{
		for (b = 0; b <= 9; b++)
		{
			sum = a * b;
			product = sum / 10;
			row = product % 10;

			if (b == 0)

			{
				_putchar('0');
			}

			else if (sum < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(row + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(product + '0');
				_putchar(row + '0');
			}
			{
				_putchar(10);
			}
		}
	}
}
