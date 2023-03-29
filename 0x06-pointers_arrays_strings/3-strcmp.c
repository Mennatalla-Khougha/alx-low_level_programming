#include "main.h"

/**
 *_strcmp - compares two strings.
 *@s1: string to be compared with.
 *@s2: string to be compared.
 * Return: 0 if s1 and s2 are equals, -value if s1 is less than s2, +value if s1 is greater then s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int sum1 = 0;
	int j = 0;
	int sum2 = 0;

	while (s1[i] != 0)
	{
		sum1 += s1[i];
		i++;
	}

	while (s2[j] != 0)
	{
		sum2 += s2[j];
		j++;
	}

	if (i == j && sum1 == sum2)
		return (0);
	else
		return (sum1 - sum2);
}
