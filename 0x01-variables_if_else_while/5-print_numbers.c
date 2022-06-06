#include <stdio.h>

/**
 * main -print all sigle digit numbers of base 10 starting from 0, follow by \n
 * Return: 0 if positive
 *
 */

int main(void)
{
	int number;


	for (number = 0; number < 10; number++)
	{
		printf("%d", number);
	}
	printf("\n");
	return (0);

}
