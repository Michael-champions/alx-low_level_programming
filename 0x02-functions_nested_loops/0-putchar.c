#include "main.h"

/**
 * main - print _putchar here
 * Return: 0 if success
 *
 */

int main(void)
{
	int ch[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(ch[i]);
	}
	_putchar(10);
	return (0);
}
