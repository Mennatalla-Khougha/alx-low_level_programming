#include <stdio.h>

/**
 * main - print the Fibonacci numbers.
 *Return: Success will return 0.
 */

int main(void)
{
	unsigned long int first = 0;
	unsigned long int second = 1;
	unsigned long int result;
	unsigned long int breakpoint = 10000000000;
	unsigned long int extra;
	unsigned long int end;
	int i;

	for (i = 0; i < 98; i++)
	{
		result = first + second;
		if (result < breakpoint)
			printf("%lu", result);
		else
		{
			extra = result / breakpoint;
			end = result % breakpoint;
			printf("%lu%010lu", extra, end);
		}

		if (i < 97)
			printf(", ");
		else
			printf("\n");
		first = second;
		second = result;
	}
	return (0);
}
