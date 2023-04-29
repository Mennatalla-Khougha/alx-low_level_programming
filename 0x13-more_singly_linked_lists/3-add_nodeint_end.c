#include "lists.h"

/**
* add_nodeint_end - add node at the end of a linked list.
* @head: pointer to the pointer of the start of the list.
* @n: int element in the node.
* Return: the list with a new node.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *last_node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	else
	{
		last_node = *head;
		while (last_node->next)
		{
			last_node = last_node->next;
		}
		last_node->next = node;
	}
	return (*head);
}
