#include "hash_tables.h"

/**
 * hash_table_set - insert the value of a specified key
 * @ht: The hash table
 * @key: The key to insert
 * @value: The value to insert
 * Return: 1 success, 0 failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *str = NULL;
	hash_node_t *new_node, *current_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}

	str = strdup(value);
	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(key, current_node->key) == 0)
		{
			free(current_node->value);
			current_node->value = str;
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = str;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
