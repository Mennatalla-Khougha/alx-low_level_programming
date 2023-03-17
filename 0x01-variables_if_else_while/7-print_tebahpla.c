#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: print the alphbet in reverse.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	char c = 'z';

	for (i = 0; i < 26; i++)
	{
		putchar(c);
		c--;
	}

	putchar('\n');

	return (0);
}
