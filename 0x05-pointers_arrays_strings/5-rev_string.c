#include "main.h"

/**
 * rev_string - reverse a string.
 *@s: string.
 * Return: nothing.
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	char n = s[0];

	while (s[i] != 0)
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		i--;
		n = s[j];
		s[j] = s[i];
		s[i] = n;
	}
}
