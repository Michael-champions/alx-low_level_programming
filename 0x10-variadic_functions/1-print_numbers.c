#include "variadic_functions.h"


/**
 * print_numbers -> a function that prints numbers, follow by \n
 *
 * @separator: the number of parameters
 *
 * @n: the number of parameters
 * Description: this function prints all the parameters)
 *
 * Return: success
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;

	unsigned int a;

	a = 0;
	va_start(nums, n);

	while (a < n)
	{
		printf("%d", va_arg(nums, unsigned int));

		if (a < (n - 1) && separator != NULL)

			printf("%s", separator);
		a++;
	}
	va_end(nums)

	printf("\n");
}
