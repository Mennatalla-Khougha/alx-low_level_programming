#include "hash_tables.h"

/**
* hash_table_get - get the value of specified key
* @ht: the hash table
* @key: the key
* Return: the value or NULL if not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(key, current->key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}
