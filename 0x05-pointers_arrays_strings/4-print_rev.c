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

	while (s[i] != 0)
	{
		i++;
	}

	for (j = i; j > 0; j--)
	{
		_putchar(s[j]);
	}
}
