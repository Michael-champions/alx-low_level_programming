#include "main.h"

/**
 * print_numbers - prints nmubers from 0-9
 *
 * Return: 0
 */
void print_numbers(void)
{
	char number[11] = "0123456789";
	int i = 0;


	for (i = 0; i < 10; i++)
	{
		_putchar(number[i]);
	}
	_putchar('\n');
}
