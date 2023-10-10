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
	int i, j, jump = sqrt(size), flag = 0;
	listint_t *head, *prev;

	if (!list)
		return (NULL);
	for (i = jump, prev = list, head = list; head->next; i += jump)
	{
		for (j = head->index;
			j < (int)size && head->next && (int)head->index < i;
			j++, head = head->next)
			;
		printf("Value checked at index [%ld] = [%d]\n", head->index, head->n);
		if ((head->n > value || i >= (int)size) && !flag)
		{
			if (i >= (int)size)
				i = size - 1;
			printf("Value found between indexes [%ld] and [%d]\n", prev->index, i);
			size = i + 1;
			head = prev;
			i = prev->index - 1;
			jump = 1;
			flag++;
		}
		else if (head->n == value)
			return (head);
		prev = head;
	}
	return (NULL);
}
