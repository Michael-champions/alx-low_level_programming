#include "main.h"

/**
 * print_alphabet_x10 -prints 10 times the alphabet, in lowercase, \n
 *
 * Return: 0 if if success
 */

void print_alphabet_x10(void)
{
	int alphabet = 0;
	char alphabet1 = 'a';


	while (alphabet < 10)
	{
		alphabet1 = 'a';
		while (alphabet1 <= 'z')
		{
			_putchar(alphabet1);
			alphabet1++;
		}
	}
	_putchar('\n');
	alphabet++;
}
