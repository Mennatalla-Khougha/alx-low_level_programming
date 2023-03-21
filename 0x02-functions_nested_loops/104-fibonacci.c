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
	unsigned long int half1;
	unsigned long int half2;
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
		half1 = divid1 + divid2;
		half2 = module1 + module2;
		if (module1 + module2 > 9999999999)
		{
			half1 += 1;
			half2 %= breakpoint;
		}
		printf("%lu%lu", half1, half2);
		if (i < 98)
			printf(", ");
		else
			printf("\n");
		divid1 = divid2;
		divid2 = half1;
		module1 = module2;
		module2 = half2;
	}
	return (0);
}
