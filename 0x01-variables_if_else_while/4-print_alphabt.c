#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the alphabet expet e and q.
 *
 * Return: The alphabet except e and q
 */

int main(void)
{
	int i;
	char a = 'a';

	for (i = 0; i < 26; i++)
	{
		if (a == 'e' || a == 'q')
		{
			a++;
		}
		else
		{
			putchar(a);
			a++;
		}
	}

	putchar('\n');

	return (0);
}
