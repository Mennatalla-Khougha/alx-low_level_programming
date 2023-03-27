#include "main.h"

/**
 * puts_half - print half of a string.
 * @str: char.
 * Return: nothing.
 */

void puts_half(char *str)
{
	int i = 0;
	int j;
	int n = i / 2;

	while (str[i] != 0)
	{
		i++;
	}

	if (i % 2 == 0)
	{
		for (j = n; j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = n - 1; j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
