#include <stdio.h>

/**
 * main - print the Fibonacci numbers.
 *Return: Success will return 0.
 */

int main(void)
{
	long first = 0;
	long second = 1;
	long result = 0;
	int i;
    long sum = 0;

	for (i = 0; result < 4000000; i++)
	{
		result = first + second;
        if (result % 2 == 0)
        {
		    sum += result;
        } 
		first = second;
		second = result;
	}
	printf("%ld\n", sum);
	return (0);
}
