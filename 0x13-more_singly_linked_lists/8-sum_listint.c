#include "lists.h"

/**
 * sum_listint - sum all the nodes in a linked list.
 * @head: the first node of a linked list.
 * Return: the sum of all the nodes.
 */

int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
