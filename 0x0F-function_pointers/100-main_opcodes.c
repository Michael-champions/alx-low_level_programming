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

int main(int argc, char *argv[])
{
	int (*f)(int, char**);
	int i = 0;
	int hexByte;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	f = main;

	while (i < atoi(argv[1]))
	{
		hexByte = *(unsigned char *)(f + i);
		printf("%.2x", hexByte);
		if (i < atoi(argv[1]) - 1)
			putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
