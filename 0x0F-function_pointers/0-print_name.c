#include "function_pointers.h"

/**
 * print_name -> a function that print name
 *
 * @name: the name to be printed
 *
 * @f: void funct
 */

void print_name(char *name, void (*f)(char *))
{
	if (name)
	{
		f(name);
	}
}
