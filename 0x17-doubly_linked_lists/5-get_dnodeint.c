#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the first node
 * @index: index of the node, starting from 0
 *
 * Return: the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (index == 0)
		return (head);

	temp = head;
	for (i = 0; i < index && temp; i++)
	{
		temp = temp->next;
		if (temp == NULL && i != index - 1)
			return (NULL);
	}
	return (temp);
}
