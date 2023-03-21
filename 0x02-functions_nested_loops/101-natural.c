#include <stdio.h>

/**
 * main - sum of muliples of 3 and 5.
 * Return: 0 Success.
 */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; sum < 1024; i++)
	{
		if (i % 3 || i % 5)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
