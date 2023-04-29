#include "lists.h"

/**
 * add_nodeint - add a node to the start of a linked list.
 * @head: pointer to the pointer of the first element.
 * @n: int inside the node.
 * Return: the new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
