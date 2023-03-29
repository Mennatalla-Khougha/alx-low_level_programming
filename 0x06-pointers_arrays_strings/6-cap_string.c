#include "main.h"

/**
 * cap_string - capitalize all words of string.
 * @str: string.
 * Return: str.
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		if (str[0] > 96 && str[0] < 123)
			str[0] -= 32;

		switch (str[i - 1])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '\"':
			case '(':
			case ')':
			case '{':
			case '}':
				if (str[i] > 96 && str[i] < 123)
					str[i] -= 32;
		}
		i++;
	}
	return (str);
}

