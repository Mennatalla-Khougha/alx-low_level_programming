#include "main.h"

/**
 *print_alphabet_x10 - print the alphabet 10 times.
 *Return: 0 (Success).
 */

void print_alphabet_x10(void)
{
	char a = 'a';
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(a);
			a++;
		}
		a = 'a';
		_putchar('\n');
	}
}
