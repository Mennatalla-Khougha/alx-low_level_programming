#include "hash_tables.h"

/**
 * key_index - index of the key
 * @key: the key
 * @size: size of the hash table
 * Return: the index of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int index = hash_djb2(key) % size;

	return (index);
}
