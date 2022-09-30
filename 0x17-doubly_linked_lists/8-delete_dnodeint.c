#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at index "index" of a dlistint_t
 *	linked list
 * @head: pointer to the pointer to the first node
 * @idx: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int idx)
{
	dlistint_t *del;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	del = *head;
	if (idx == 0)
		*head = del->next;
	else
	{
		for (i = 0; i < idx && del; i++)
			del = del->next;
	}
	if (del->next)
		del->next->prev = del->prev;
	if (del->prev)
		del->prev->next = del->next;
	free(del);
	return (1);
}
