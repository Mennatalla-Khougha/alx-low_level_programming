#include "main.h"

/**
 * print_rev - print a string in reverse.
 * @s: string.
 * Return: nothing.
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (*s != 0)
	{
		i++;
		s++;
	}
	s--;

	for (j = i; j >= 0; j--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
