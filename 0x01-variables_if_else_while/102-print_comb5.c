#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible combination of 2 digit numbers
 *
 * Return: 0 (Success).
 */

int main(void)
{
	int i = 0;
	int j = 0;
	int m = 0;
	int n = 1;

	while (i < 10)
	{
		while (j < 9)
		{
			while (m < 10)
			{
				while (n < 10)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + m);
					putchar('0' + n);
					if (i == 9 && j == 8 && m == 9 && n == 9)
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					n++;
				}
				n = 0;
				m++;
			}
			m = 0;
			j++;
		}
		j = 0;
		i++;
	}

	return (0);
}