#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible combinations of two digit.
 *
 * Return: 0 (Success).
 */

int main(void)
{
	int i;
	int j = 0;

	for (i = 0; i < 10; i++)
	{
		while (j < 10)
		{
			if (i == j || i > j)
			{
				j++;
			}
			else
			{
				putchar('0' + i);
				putchar('0' + j);
				if (i == 8 && j == 9)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
				j++;
			}
		}
		
		j = 0;
	}

	return (0);
}
