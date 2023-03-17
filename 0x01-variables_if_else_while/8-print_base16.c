#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all the numbers of base 16.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	int c = 'a';

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}

	for (i = 0; i < 6; i++)
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
