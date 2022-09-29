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
	dlistint_t *temp, *deleteNode;
	unsigned int i;

	temp = *head;
	if (idx == 0 && temp)
	{
		*head = temp->next;
		(*head)->prev = NULL;
		free(temp);
	}
	else if (idx && temp)
	{
		for (i = 0; i < idx - 1 && temp; i++)
		{
			temp = temp->next;
			if (temp == NULL && i != idx - 2)
				return (-1);
		}
		deleteNode = temp->next;
		temp->next = deleteNode->next;
		deleteNode->next->prev = temp;
		free(deleteNode);
	}
	return (1);
}
