#include "main.h"

/**
 * _strspn - entry point
 *
 * @s: input
 * @accept: input
 *
 * Return: bytes in the initial segment of s
 *  which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, value, output;

	value = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		output = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				value++;
				output = 1;
			}
		}
		if (output == 0)
			return (value);
	}

	return (value);
}
