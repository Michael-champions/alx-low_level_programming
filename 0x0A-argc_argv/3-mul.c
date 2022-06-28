#include <stdio.h>

#include <stdlib.h>

/**
 * main - print message here
 *
 * @argc: Counts the number of parameters that go into main
 *
 * @argv: Pointer of array of pointers containing strings entering main
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int n, err;

	err = 0;
	if (argc != 3)
	{
		printf("%s\n", "error");
		err = 1;
	}
	else
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", n);
	}
	return (err);
}
