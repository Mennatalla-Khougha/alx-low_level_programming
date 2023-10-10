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
	int jump, i, j;
	listint_t *tmp = list;

	if (list == NULL)
		return (NULL);

	jump = sqrt((int)size);
	for (i = jump; i < (int)size; i += jump)
	{
		while ((int)tmp->index != i)
			tmp = tmp->next;
		if (value <= tmp->n)
			break;
		printf("Value checked at index [%d] = [%d]\n", i, tmp->n);
	}
	if (i == (int)size)
	{
		while (tmp->index != size - 1)
			tmp = tmp->next;
		printf("Value checked at index [%d] = [%d]\n", (int)size - 1, tmp->n);
		printf("Value found between indexes [%d] and [%ld]\n",  i - jump, size - 1);
	}
	else
	{
		printf("Value checked at index [%d] = [%d]\n", i, tmp->n);
		printf("Value found between indexes [%d] and [%d]\n",  i - jump, i);
	}
	while ((int)list->index != i - jump)
		list = list->next;
	for (j = i - jump; j < i && j < (int)size; j++)
	{
		printf("Value checked at index [%d] = [%d]\n", j, list->n);
		if (value == list->n)
			return (list);
		list = list->next;
	}
	return (NULL);

}

