#include "lists.h"

/**
 * add_node_end - add a node at the end of the linked list.
 * @head: pointer to the start of the linked list.
 * @str: string element of the list.
 * Return: the new node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t len;
	char *node_str;
	list_t *node, *next_node;

	node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);

	node_str = strdup(str);
	if (!node_str)
	{
		free(node);
		return (NULL);
	}

	len = strlen(str);

	node->str = node_str;
	node->len = len;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		next_node = *head;
		while (next_node->next != NULL)
		{
			next_node = next_node->next;
		}
		next_node->next = node;
	}

	return (*head);
}
