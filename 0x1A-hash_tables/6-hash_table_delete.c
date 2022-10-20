#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: The address of the hash table
 *
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	
	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;

		while (ht->array[i] != NULL)
		{
			temp = ht->array[i];
			ht->array[i] = (ht->array[i])->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}		
