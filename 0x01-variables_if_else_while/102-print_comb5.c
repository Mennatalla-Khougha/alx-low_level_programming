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
	int j;
	int m;
	int n;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			n = j + 1;
			m = i;
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
			j++;
		}
		i++;
	}

	return (0);
}
