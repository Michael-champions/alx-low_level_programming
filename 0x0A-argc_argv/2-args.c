#include <stdio.h>

#include <stdlib.h>

/**
 * main - print message here
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int numb = 0;

	if (argc > 0)
	{
		while (numb < argc)
		{
			printf("%s\n", argv[count]);
			numb++;
		}
	}
	return (0);
}
