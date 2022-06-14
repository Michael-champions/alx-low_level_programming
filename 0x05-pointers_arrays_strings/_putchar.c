#include <unistd.h>

/**
 * _putchar - write the the character c to stdout
 *
 * @c: the character to print
 *
 * Return: if success 1
 * if error: -1 is returned.
 */
int _putchar(char c)
{
	return (write (1, $c, 1));
}
