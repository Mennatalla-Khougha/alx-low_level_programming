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
	char *s;
	char *str;

	str = malloc(strlen(format) + 1);
	strcpy(str, format);
	va_start(args, format);
	while (str && *str)
	{
		switch (*str)
		{
			case('c'):
				printf("%c", va_arg(args, int));
				break;
			case('i'):
				printf("%d", va_arg(args, int));
				break;
			case('f'):
				printf("%f", va_arg(args, double));
				break;
			case('s'):
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		}
		str++;
		if (*str)
			printf(", ");
		}
	printf("\n");
	va_end(args);
}
