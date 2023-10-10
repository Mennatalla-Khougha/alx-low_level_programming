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
	skiplist_t *p = list, *h = list->express;

	if (list == NULL || value < list->n)
		return (NULL);
	while (h)
	{
		printf("Value checked at index [%ld] = [%d]\n", h->index, h->n);
		if (value <= h->n)
			break;
		while (p->n != h->n)
		{
			p = p->next;
		}
		if (h->express)
			h = h->express;
		else
		{
			while (h->next)
			{
				h = h->next;
			}
			break;
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n",  p->index, h->index);
	while (p->n != h->n)
	{
		printf("Value checked at index [%ld] = [%d]\n", p->index, p->n);
		if (value == p->n)
			return (p);
		if (p->next)
			p = p->next;
	}
	if (p->n == h->n)
	{
		printf("Value checked at index [%ld] = [%d]\n", p->index, p->n);
		if (value == p->n)
			return (p);
	}
	return (NULL);
}
