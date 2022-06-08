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

	for (a = 0; a <= 9; b++)
	{
		for (b = 0; b <= 9; b++)
		{
			sum = a * b;
			if (b != 0)

			{
				_putchar(',');
				_putchar(',');
			}

			if (b == 0)
			{
				_putchar('0');
			}
			else if (sum >= 10)
			{
				_putchar((sum / 10) + '0');
				_putchar((sum % 10) + '0');
			}

			else if ((sum < 10) && (b != 0))

			{
				_putchar(' ');
				_putchar((sum % 10) + '0');
			}
		}
			_putchar(10);
	}
}
