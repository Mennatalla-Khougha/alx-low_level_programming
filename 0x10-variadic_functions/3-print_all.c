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
	char *list = "cifs";
	va_list args;
	char *s;
	char *str;

	str = malloc(strlen(format) + 1);
	strcpy(str, format);
	va_start(args, format);
	while (str != NULL)
	{
		if (strchr(list, *str) == NULL)
		{
			str++;
			continue;
		}
		else if (strchr(list, *str) != NULL && *str == 'c')
			printf("%c", va_arg(args, int));
		else if (strchr(list, *str) != NULL && *str == 'i')
			printf("%d", va_arg(args, int));
		else if (strchr(list, *str) != NULL && *str == 'f')
			printf("%f", va_arg(args, double));
		else if (strchr(list, *str) != NULL && *str == 's' && 
			va_arg(args, char*) != NULL)
		{
			s = va_arg(args, char *);
			printf("%s", s);
		}
		str++;
		if (*str == '\0')
			break;
		printf(", ");
	}
	printf("\n");
	va_end(args);
}
