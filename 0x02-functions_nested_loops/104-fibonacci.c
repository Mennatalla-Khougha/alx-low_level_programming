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

	for (i = 0; i < 93; i++)
	{
		result = first + second;
		printf("%lu", result);
		printf(", ");
		first = second;
		second = result;
	}
	for (i = 93; i < 98; i++)
	{
		extra = (first + second) / breakpoint;
		end = (first + second) % breakpoint;
		printf("%lu%lu", extra, end);
		if (i < 98) 
			printf(", ");
		else
			printf("\n");
		first = second;
		second = result;
	}
	return (0);
}
