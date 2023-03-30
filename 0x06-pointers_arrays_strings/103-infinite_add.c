#include "main.h"

/**
 * infinite_add - adds two numbers.
 * @n1: first number.
 * @n2: second number.
 * @r: the result.
 * @size_r: the result size.
 * Return: result or 0 if result can't be stored in r.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, add = 0;
	int length, result, num1, num2;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > j)
		length = i;
	else
		length = j;
	if (length + 1 >= size_r)
	       return (0);
	i--, j--;
	num1 = n1[i] - 48, num2 = n2[j] - 48;
	r[length + 1] = '\0';
	while (length >= 0)
	{
		result = num1 + num2 + add;
		if (result > 9)
			add = result / 10;
		else
			add = 0;
		r[length] = (result % 10) + 48;
		if (i > 0)
			i--, num1 = n1[i] - 48;
		else
			num1 = 0;
		if (j > 0)
			j--, num2 = n2[j] - 48;
		else
			num2 = 0;
	length--;
	}
	if (*r == '0')
		return (r + 1);
	else 
		return (r);
}
