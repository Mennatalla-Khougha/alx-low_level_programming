#include "main.h"

/**
 * times_table - print the 9 times table.
 * Return: nothing;
 */

void times_table(void)
{
	int i;
	int j;
	int times;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');

		for (j = 1; j < 10; j++)
		{
			times = i * j;
			_putchar(',');
			_putchar(' ');

			if (times < 10)
			{
				_putchar(' ');
				_putchar(times + '0');
			}
			else
			{
				_putchar(times / 10 + '0');
				_putchar(times % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
