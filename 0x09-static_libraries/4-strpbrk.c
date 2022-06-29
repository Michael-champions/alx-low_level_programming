#include "main.h"


/**
 * _strpbrk - searches a string for any of the set of byte
 *
 * @s: the string to be searched
 *
 * @accept: the set of byte to be searched for
 *
 *  Return: pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
