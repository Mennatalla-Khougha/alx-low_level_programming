#include "main.h"

/**
 * print_triangle - print a triangle.
 * @size: size of the triangle.
 * Return: nothing.
 */

void print_triangle(int size)
{
	int i;
	int j;
	int n;
	int x = size;

	for (i = 0; i < size; i++)
	{
		for (j = x; j > 0; j--)
		{
			_putchar(' ');
		}
		x--;
		for (n = 0; n <= i ; n++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
