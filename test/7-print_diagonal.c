#include "main.h"

/**
 * print_diagonal - Draw a diagonal line.
 * @n: length of the line.
 * Return: nothing.
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i ; j++)
		{
			_putchar(32);
		}
			_putchar(92);
			_putchar('\n');
	}
}
