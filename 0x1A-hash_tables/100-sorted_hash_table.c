#include "hash_tables.h"

/**
 * shash_table_create - creates a new hash table
 * @size: The size of the hash table
 *
 * Return: A pointer to the newly created hash table, otherwise
 * return NULL
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned long int i;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->size = size;
	new_table->shead = NULL;
	new_table->stail = NULL;

	for (i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}

	return (new_table);
}

/**
 * shash_table_set - adds an element to the hash table
 * @ht: The address of the hash table
 * @key: The key
 * @value: The value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *key)
{
	unsigned long int index;

	index = key_index((unsigned char *)key, ht->size);
	return (1);
}
