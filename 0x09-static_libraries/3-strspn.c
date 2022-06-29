#include "main.h"


/**
 * _strspn - function that gets the lenght of a prefix substring
 *
 * @s: string
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of byte in the initial segment s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, flag;

	f = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			f++;
			flag = 1;
		}
	}
	if (flag == 0)
	{
		return (f);
	}
	return (0);
}
