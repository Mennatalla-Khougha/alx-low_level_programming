#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print_numbers
 * @seperator: string printed between numbers.
 * @n: number of args.
 * Return: nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int s;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, unsigned int);
		printf("%d", s);
		if (separator == NULL)
			continue;
		if (i == n - 1)
			continue;
		printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
