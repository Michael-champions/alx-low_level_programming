#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0, \n
 *
 * Return: 0 if positive
 *
 */
int main(void)
{
	int ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);

}
