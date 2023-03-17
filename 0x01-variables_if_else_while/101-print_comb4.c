#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible combination of 3 digits.
 *
 * Return: 0 (Success).
 */

int main(void)
{
	int i = 0;
	int j = 1;
	int k = 2;

	while (i < 10)
	{
		while (j < 10)
		{
			while (k < 10)
			{
				if (i == j || i == k || j == k || i > j || i > k || j > k)
				{
					k++;
				}
				else
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
					if (i == 7 && j == 8 && k == 9)
					{
					putchar('\n');
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					k++;
				}
			}
			k = 2;
			j++;
		}
		j = 1;
		i++;
	}
	return (0);
	}
