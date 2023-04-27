#include "lists.h"

/**
 * add_node - add a node at the start of the list.
 * @head: the pointer to the start of the list.
 * @str: the string element of the list.
 * Return: the new node.
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t len;
	char *node_str;
	list_t *node = malloc(sizeof(list_t));

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
	if (*head == NULL)
		node->next = *head;
	else
		node->next = *head;

	*head = node;
	return (node);
}
