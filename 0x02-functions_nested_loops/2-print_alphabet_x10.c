#include "main.h"

/**
 * print_alphabet_x10 -prints 10 times the alphabet, in lowercase, \n
 *
 * Return: 0 if if success
 */

void print_alphabet_x10(void)
{
	int alpha = 0;
	char alpha2 = 'a';

	while (alpha < 10)
	{
		alpha2 = 'a';
		while (alpha2 <= 'z')
		{
			_putchar(alpha2);
			alpha2++;
		}
		_putchar(10);

		alpha++;
	}
}
