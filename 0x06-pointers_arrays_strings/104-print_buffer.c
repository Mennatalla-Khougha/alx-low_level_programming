#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer.
 * @b: buffer pointed to.
 * @size: bytes.
 * Return: nothing
 */

void print_buffer(char *b, int size)
{
	int i, j, x = 0, c;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	while (x < size)
	{
		if (size - x < 10)
			j = size - x;
		else
			j = 10;
		printf("%08x:", x);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", b[x + i]);
			else
				printf(" ");
			if (i % 2)
				printf(" ");
		}
		for (i = 0; i < j; i++)
		{
			c = b[x + i];

			if (c < 32 || c > 132)
				c = '.';
			printf("%c", c);
		}
		printf("\n");
		x += 10;
	}
}
