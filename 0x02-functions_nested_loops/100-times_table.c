#include "main.h"

/**
 * print_times_table - print n times table.
 * @n: int number.
 * Return: nothing.
*/

void print_times_table(int n)
{
	int i;
	int j;
	int times;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			times = i * j;
			if (j < n + 1)
			{
			_putchar(',');
			_putchar(' ');
			}
			if (times < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + times);
			}
			else if (times < 100)
			{
				_putchar(' ');
				_putchar('0' + times / 10);
				_putchar('0' + times % 10);
			}
			else
			{
				_putchar('0' + times / 100);
				times = times - (times / 100 * 100);
				_putchar('0' + times / 10);
				_putchar('0' + times % 10);
			}
		}
	_putchar('\n');
	}
}
