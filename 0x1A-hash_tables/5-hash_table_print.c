#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: The address of the hash table
 *
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	int flag = 0;

	if (ht == NULL)
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;

		temp = ht->array[i];
		while (temp != NULL)
		{
			if (flag == 0)
				printf("'%s': '%s'", temp->key, temp->value);
			else
				printf(", '%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			flag = 1;
		}
	}
	putchar('}');
	putchar('\n');
}
