#include <stdio.h>

/**
 * main - print the Fibonacci numbers.
 *Return: Success will return 0.
 */

int main(void)
{
	long first = 0;
	long second = 1;
	long result;
	int i;

	for (i = 0; i < 50; i++)
	{
		result = first + second;
		printf("%ld", result);

		if (i < 49)
			printf(", ");
		else
			printf("\n");
		first = second;
		second = result;
	}
	return (0);
}
