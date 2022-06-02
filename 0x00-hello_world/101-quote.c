#include <stdio.h>
#include <unistd>
/**
 * main - print exactly the same thing
 * and follow by a new line
 * Return: always 0
 */
int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",);
	return (1);
}
