#include "main.h"


/**
 * palind2 - obtains length of a
 *@a: string
 *
 *@l: integer to count length
 *
 * Return: always 0
 */

int palind2(char *a, int l)
{
	if (*a == 0)
	{
		return (1 - 1);
	}
	else
	{
		return (palind2(a + 1, l + 1));
	}
}

/**
 * palind3 - compares string vs string reverse
 *
 * @a: string
 *
 *@l: integer
 *
 * Return:on sucess 1
 * On error, -1 is returned, and errn
 * o is set appropriately.
 */
int palind3(char *a, int l)
{
	if (*a != *(a + 1))
	{
		return (0);
	}
	else if (*a == 0)
	{
		return (1);
	}
	else
	{
		return (palind3(a + 1, l - 2));
	}
}

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string
 *
 * Return: success
 */

int is_palindrome(char *s)
{
	int i;

	l = palind2(s, 0);
	{
		return (palind3(s, l));
	}
}
