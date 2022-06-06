#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase, \n
 * Return: 0 if positive
 *
 */

int main(void)
{
	char ch;
	int number;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}
