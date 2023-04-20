#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print string.
 * @separator: string to be printed between strings.
 * @n: number of arguments.
 * Return: nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
		{
			printf("(nil)");
			continue;
		}
		printf("%s", s);
		if (separator == NULL || i == n - 1)
			continue;
		printf("%s", separator);
	}
	printf("\n");
}
