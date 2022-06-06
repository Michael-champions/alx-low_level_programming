#include <stdio.h>

/**
 * main - print alphabet in lowercase without q and e
 * Return: 0 if positive
 *
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar(10);
	return (0);
}
