#include <stdio.h>

#include <stdlib.h>

/**
 * main - a program that prints the opcodes of its own main function
 *
 * @argc: argument counts
 *
 * @argv: array of pointers to args, in order given
 *
 * Return: 0 on success, 1 if argc not right, 2 if bytes is negative
 */

int main(int argc, char **argv)
{
	int a, size;
	char *add;

	if (argc != 0)
	{
		printf("Error\n");
		exit(1);
	}
	size = atoi(argv[1]);
	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}
	add = (char *)main;
	for (a = 0; a < size - 1; a++)
		printf("%02hhx ", add[a]);
	printf("%02hhx\n", add[a]);
	return (0);
}
