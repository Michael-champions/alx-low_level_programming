#include <stdio.h>

/**
 * main - print alphabet a-z in lowercase
 * Return: 0 if positive
 *
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
