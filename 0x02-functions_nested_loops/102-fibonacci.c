#include <stdio.h>

/**
 * main - print the Fibonacci numbers.
 *Return: Success will return 0.
 */

int main(void)
{
	int first = 0;
	int second = 1;
	int result;
	int i;

	for (i = 0; i < 50; i++)
	{
		result = first + second;
		printf("%d", result);

		if (i < 49)
			printf(", ");
		else
			printf("\n");
		first = second;
		second = result;
	}
	return (0);
}
