#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase, \n
 *
 * Return: 0 if success
 *
 */
void print_alphabet(void)
{
	int text = 'a';

	while (text <= 'z')
	{
		_putchar(text);
		text++;
	}
	_putchar(10);
	return (0);
}
