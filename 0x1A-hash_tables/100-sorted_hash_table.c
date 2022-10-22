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

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *temp;
	unsigned long int index;

	if (ht == NULL || key[0] == '\0' || key == NULL || value == NULL)
		return (0);

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = new_node->sprev = new_node->snext = NULL;

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		temp = ht->array[index];
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				free(new_node->key);
				free(new_node->value);
				free(new_node);
				return (1);
			}
			temp = temp->next;
		}
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	if (ht->shead == NULL)
		ht->shead = ht->stail = new_node;
	else
	{
		temp = ht->shead;
		while (temp)
		{
			if (strcmp(new_node->key, temp->key) < 0)
			{
				new_node->snext = temp;
				temp->sprev = new_node;
				ht->shead = new_node;
				return (1);
			}
			else if (strcmp(new_node->key, temp->key) > 0 && !temp->snext)
			{
				new_node->sprev = temp;
				temp->snext = new_node;
				ht->stail = new_node;
				return (1);
			}
			else if (strcmp(new_node->key, temp->key) > 0 &&
					strcmp(new_node->key, temp->snext->key) < 0)
			{
				new_node->snext = temp->snext;
				new_node->sprev = temp;
				temp->snext = new_node;
				new_node->snext->sprev = new_node;
				return (1);
			}
			else
				temp = temp->snext;
		}
	}
	return (1);
}


/**
 * shash_table_get - retrives the value associated with the key
 * @ht: The address of the table
 * @key: The key
 *
 * Return: The value associated with the key
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];
	if (temp == NULL)
		return (NULL);

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - Prints the hash tables key/value pair using
 * the sorted linked list
 * @ht: The address to the hash table
 *
 * Return: Nothing
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht->shead == NULL)
		return;

	temp = ht->shead;
	putchar('{');
	while (temp)
	{
		if (temp->snext == NULL)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			break;
		}
		printf("'%s': '%s', ", temp->key, temp->value);
		temp = temp->snext;
	}
	putchar('}');
	putchar('\n');
}

/**
 * shash_table_print_rev - prints the hash tables key/value pairs in
 * reverse order using the sorted linked list
 * @ht: The address of the hash table
 *
 * Return: Nothing
 */


void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht->stail == NULL)
		return;

	temp = ht->stail;
	putchar('{');
	while (temp)
	{
		if (temp->sprev == NULL)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			break;
		}
		printf("'%s': '%s', ", temp->key, temp->value);
		temp = temp->sprev;
	}
	putchar('}');
	putchar('\n');
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: The address of the hash table
 *
 * Return: Nothing
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp;
	unsigned long int i;

	if (ht == NULL)
		return;

	while (ht->shead)
	{
		temp = ht->shead;
		ht->shead = (ht->shead)->snext;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
	ht->stail = NULL;

	for (i = 0; i < ht->size; i++)
	{
		ht->array[i] = NULL;
	}

	free(ht->array);
	free(ht);
}
