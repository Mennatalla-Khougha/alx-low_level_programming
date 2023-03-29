#include "main.h"

/**
 * cap_string - capitalize all words of string.
 * @str: string.
 * Return: str.
 */

char *cap_string(char *str)
{
	int i = 0;
	char cap[] = ",;.!?(){}\n\t\" ";
	int j;
	int n;

	while (cap[j] !=0)
		j++;

	while (str[i] != 0)
	{
		for (n = 0; n < j; n++)
		{
			if (str[i - 1] == cap[n])
			{
				/*
		switch (str[i - 1])
		{
			case ' ':
			case '	':
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
			case '}':*/
				if (str[i] > 96 && str[i] < 123)
					str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}

