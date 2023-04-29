#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at nth index.
 * @head: pointer to the start of the list.
 * @idx: the index to insert node at.
 * @n: int element of the node.
 *Return: the address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, insigned int idx, int n)
{
	listint_t *first = *head, *node = malloc(sizeof(listont_t));
	unsigned int i = 0;

	if (node == NULL || *head == NULL)
		return (NULL);
	node->n = n;
	while (i < idx - 1)
	{
		if (first == NULL)
			return (NULL);
		first = first->next;
		i++;
	}
	node->next = first->next;
	first->next = node;
	return (node);
}
