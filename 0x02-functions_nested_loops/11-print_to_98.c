#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers from n to 98.
 * @n: int number.
 * Return: nothing.
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 99; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	else
	{
		for (i = n; i > 97; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	printf("\n");
}
