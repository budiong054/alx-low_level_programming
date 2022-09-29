#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the first node
 * @idx: index of the list where the new node should be added
 * @n: The data
 *
 * Return: The address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
	}
	else
	{
		temp = *h;
		for (i = 0; i < idx - 1 && temp; i++)
		{
			temp = temp->next;
			if (temp == NULL && i != idx - 2)
			{
				free(new);
				return (NULL);
			}
		}
		new->next = temp->next;
		new->prev = temp;
		temp->next = new;
		new->next->prev = new;
	}
	return (new);
}
