#include <stdio.h>

/**
 * main - print the Fibonacci numbers.
 *Return: Success will return 0.
 */

int main(void)
{
	unsigned long int first = 0, second = 1, result, breakpoint = 10000000000;
	unsigned long int divid1, divid2, module1, module2, half1, half2;
	int i;

	for (i = 0; i < 92; i++)
	{
		result = first + second;
		printf("%lu", result);
		printf(", ");
		first = second;
		second = result;
	}
	divid1 = first / breakpoint;
	divid2 = second / breakpoint;
	module1 = first % breakpoint;
	module2 = second % breakpoint;
	for (i = 93; i < 99; i++)
	{
		half1 = divid1 + divid2;
		half2 = module1 + module2;
		if (half2 > 9999999999)
		{
			half1 += 1;
			half2 %= breakpoint;
		}
		printf("%lu%lu", half1, half2);
		if (i < 98)
			printf(", ");
		divid1 = divid2;
		divid2 = half1;
		module1 = module2;
		module2 = half2;
	}
	printf("\n");
	return (0);
}
