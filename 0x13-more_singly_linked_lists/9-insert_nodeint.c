#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to the address of the head node
 * @idx: index of the list where the new node should be added
 * @n: the data of the node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new;
	unsigned int i;
	size_t nodelen;

	nodelen = listint_len(*head);
	if (idx > nodelen)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	temp = *head;
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		for (i = 0; i < idx; i++)
		{
			if (i == idx - 1)
			{
				if (temp)
					new->next = temp->next;
				temp->next = new;
			}
			temp = temp->next;
		}
	}
	return (new);
}

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the head node
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
