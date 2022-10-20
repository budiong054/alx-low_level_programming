#include "hash_tables.h"

/**
 * hash_table_get - retrueves a value associated with a key
 * @ht: The hash table you want to look up
 * @key: The key you are looking for
 *
 * Return: The value associated with the element, or NULL if key couldn't
 * be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];
	if (temp == NULL)
		return (NULL);

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
