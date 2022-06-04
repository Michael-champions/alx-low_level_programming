#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print entry here
 * Return: 0 if positive
 */
int main(void)
{
	int n, lstdgt;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	lstdgt = n % 10;

	if (lstdgt != 0 && lstdgt < 6)

	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lstdgt);
	}

	else if (lstdgt == 0)

		printf("Last digit of %d is %d and is 0\n",  n, lstdgt);

	else if (lstdgt > 5)

		printf("Last digit of %d is %d and is greater than 5\n", n, lstdgt);
	return (0); }
