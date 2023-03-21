#include <stdio.h>

/**
 * main - print the Fibonacci numbers.
 *Return: Success will return 0.
 */

int main(void)
{
	unsigned long first = 0;
	unsigned long second = 1;
	unsigned long result;
	int i;

	for (i = 0; i < 98; i++)
	{
		result = first + second;
		printf("%lu", result);

		if (i < 97)
			printf(", ");
		else
			printf("\n");
		first = second;
		second = result;
	}
	return (0);
}
