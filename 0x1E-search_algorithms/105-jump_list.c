#include <stdio.h>
#include <stddef.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 * @list: pointer to the head of the list to search in
 * @size: the number of nodes in list
 * @value: the value to search for
 * Return: pointer to the first node where value is located, NULL
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int jump = sqrt((int)size), i, j;
	listint_t *tmp = list, *next = list;

	if (list == NULL || size == 0 || value < list->n)
		return (NULL);
	for (i = jump; i < (int)size && tmp->next; i += jump)
	{
		while ((int)tmp->index != i)
			tmp = tmp->next;
		if (tmp->index + 1 == size)
			break;
		printf("Value checked at index [%d] = [%d]\n", i, tmp->n);
		if (value <= tmp->n)
			break;
	}
	if (i == (int)size)
	{
		while (tmp->index != size - 1)
			tmp = tmp->next;
		printf("Value checked at index [%d] = [%d]\n", (int)size - 1, tmp->n);
		printf("Value found between indexes [%d] and [%ld]\n",  i - jump, size - 1);
	}
	else
		printf("Value found between indexes [%d] and [%d]\n",  i - jump, i);
	while ((int)next->index != i - jump)
		next = next->next;
	for (j = i - jump; j < i && j < (int)size; j++)
	{
		printf("Value checked at index [%d] = [%d]\n", j, next->n);
		if (value == next->n)
			return (next);
		next = next->next;
	}
	return (NULL);
}
