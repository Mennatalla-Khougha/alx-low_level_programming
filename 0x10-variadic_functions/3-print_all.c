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
	va_list args;
	char *s, *str, *sep = "";

	str = malloc(strlen(format) + 1);
	strcpy(str, format);
	va_start(args, format);
	while (str && *str)
	{
		sep = "";
		switch (*str)
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
		str++;
		if (*str)
			printf("%s", sep);
	}
	printf("\n");
	free(str);
	va_end(args);
}
