#include "main.h"

/**
 * print_alphabet_x10 -prints 10 times the alphabet, in lowercase, \n
 *
 * Return: 0 if if success
 */

void print_alphabet_x10(void)
{
	int alphabet;
	int alphabet1;

	for (alphabet = 0; alphabet <= 9; alphabet++)
	{
		for (alphabet1 = 'a'; alphabet1 <= 'z'; alphabet1++)
		{
			_putchar(alphabet1);
		}
	}
	_putchar('\n');
}
