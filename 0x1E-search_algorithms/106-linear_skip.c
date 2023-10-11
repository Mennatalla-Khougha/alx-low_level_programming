#include <stdio.h>
#include <stddef.h>
#include <math.h>
#include "search_algos.h"

/**
 * linear_skip -  searches for a value in a sorted skip list of integers
 * @list: pointer to the h of the list to search in
 * @value: the value to search for
 * Return: pointer to the first node where value is located, NULL
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *p = list, *h = list;

	if (list == NULL || value < list->n)
		return (NULL);
	while (h->next && h->n < value)
	{
		p = h;
		if (h->express != NULL)
		{
			h = h->express;
			printf("Value checked at index [%ld] = [%d]\n", h->index, h->n);
		}
		else
		{
			while (h->next != NULL)
				h = h->next;
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n",  p->index, h->index);
	while (p->n != h->n && value > p->n)
	{
		printf("Value checked at index [%ld] = [%d]\n", p->index, p->n);
		p = p->next;
	}
	printf("Value checked at index [%ld] = [%d]\n", p->index, p->n);
	if (p->n == value)
		return (p);
	return (NULL);
}
