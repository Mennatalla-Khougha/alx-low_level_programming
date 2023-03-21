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
	unsigned long int divid1;
	unsigned long int divid2;
	unsigned long int module1;
	unsigned long int module2;
	int i;

	for (i = 0; i < 93; i++)
	{
		result = first + second;
		printf("%lu", result);
		printf(", ");
		first = second;
		second = result;
	}
	for (i = 93; i < 99; i++)
	{
		divid1 = first / breakpoint;
		divid2 = second / breakpoint;
		module1 = first % breakpoint;
		module2 = second % breakpoint;
		printf("%lu%lu", divid1 + divid2, module1 + module2);
		if (i < 98)
			printf(", ");
		else
			printf("\n");
		first = second;
		second = result;
	}
	return (0);
}
