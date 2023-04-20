#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_all - print all types of arguments passed.
 * @format: list of argument types.
 * Return: nothing.
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;
	char *s, *sep = "";

	va_start(args, format);
	while (format && format[i])
	{
		sep = "";
		switch (format[i])
		{
			case('c'):
				sep = ", ";
				printf("%c", va_arg(args, int));
				break;
			case('i'):
				sep = ", ";
				printf("%d", va_arg(args, int));
				break;
			case('f'):
				sep = ", ";
				printf("%f", va_arg(args, double));
				break;
			case('s'):
				sep = ", ";
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
		}
		i++;
		if (format[i])
			printf("%s", sep);
	}
	printf("\n");
	va_end(args);
}
