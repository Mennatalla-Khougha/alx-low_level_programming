#include "hash_tables.h"

/**
 * shash_table_create - create a new hash table
 * @size: size of the hash table
 * Return: the new hash table
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = malloc(sizeof(shash_table_t));
	unsigned long int i;

	if (table == NULL)
	{
		return (NULL);
	}

	table->size = size;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	table->shead = NULL;
	table->stail = NULL;
	return (table);
}

/**
 * shash_table_set - insert the value of a specified key
 * @ht: The hash table
 * @key: The key to insert
 * @value: The value to insert
 * Return: 1 success, 0 failure
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *str;
	shash_node_t *new_node, *current_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	str = strdup(value);
	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->shead;
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = str;
			return (1);
		}
		current_node = current_node->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
	{
		free(str);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(str);
		free(new_node);
		return (0);
	}
	new_node->value = str;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	if (ht->shead == NULL)
	{
		new_node->snext = NULL;
		new_node->sprev = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		current_node = ht->shead;
		while (current_node->snext && strcmp(current_node->snext->key, key) < 0)
			current_node = current_node->snext;
		new_node->sprev = current_node;
		new_node->snext = current_node->snext;
		if (current_node->snext == NULL)
			ht->stail = new_node;
		else
			current_node->snext->sprev = new_node;
		current_node->snext = new_node;
	}
	return (1);
}

/**
* shash_table_get - get the value of specified key
* @ht: the hash table
* @key: the key
* Return: the value or NULL if not found
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	current = ht->shead;
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->snext;
	}
	return (NULL);
}

/**
 * shash_table_print - print a hash table
 * @ht: hash table
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	current = ht->shead;
	while (current)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->snext;
		if (current != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print a hash table
 * @ht: hash table
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;
	current = ht->stail;
	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->sprev;
		if (current != NULL)
			printf(", ");
	}
	printf("}\n");
}


/**
* shash_table_delete - delete a hash table
* @ht: hash table
*/
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *tmp;

	if (ht == NULL)
		return;
	current = ht->shead;
	while (current != NULL)
	{
		tmp = current->snext;
		free(current->key);
		free(current->value);
		free(current);
		current = tmp;
	}
	free(ht->array);
	free(ht);
}
