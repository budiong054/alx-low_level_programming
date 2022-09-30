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

	temp = *h;
	for (i = 0; i < idx && temp; i++)
		temp = temp->next;

	if (temp == NULL && i < idx + 1)
	{
		free(new);
		return (NULL);
	}

	new->next = temp;
	new->prev = temp->prev;
	if (new->next)
		temp->prev = new;
	if (new->prev)
		new->prev->next = new;
	else
		*h = new;
	return (new);

}
