#include "main.h"

#include <string.h>

/**
 * print_rev - prints the string in reverse
 * follow by '\n'
 *@s: declaration of s and paramters for the function
 * Return: always 0
 */
void print_rev(char *s)
{
	int num = 0;

	while (*s != '\0')
	{
		s++;
		num++
	}
	while (num > 0)
	{
		s--;
		putchar(*s);
		num--;
	}
	putchar('\n');
}
