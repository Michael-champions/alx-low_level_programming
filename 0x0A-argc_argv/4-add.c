#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>
/**
 * main - print message here
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int i, check, d;

	i = 0, d = 0, check = 1;

	if (*s == '-')
		i++;

	for (; *(s + i) != 0; i++)

	{
		d = isdigit(*(s + i));
		if (d == 0)

		{
			check = 0;
			break;
		}
	}
	return (check);
}
