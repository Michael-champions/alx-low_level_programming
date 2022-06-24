#include <stdio.h>

#include <stdlib.h>

/**
 * main - print message here
 *
 * @argc: count the number of parameter
 *
 * @argv: argument vector
 *
 * Return: always 0
 */
int main(int argc, char argv)
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
