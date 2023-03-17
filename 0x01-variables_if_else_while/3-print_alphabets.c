#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the alphabets in lowercase followed by Uppercase.
 *
 * Return: The alphabet on one line.
 */

int main(void)
{
	int i;
	char a = 'a';
	char A = 'A';

	for (i = 0; i < 26; i++)
	{
		putchar(a);
		a++;
	}

	for (i = 0; i < 26; i++)
	{
		putchar(A);
		A++;
	}

	putchar('\n');

	return (0);
}
