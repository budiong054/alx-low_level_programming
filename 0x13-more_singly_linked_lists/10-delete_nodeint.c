#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a particular index
 * of a listint_t linked list
 * @head: a pointer to the address of the head node
 * @index: the index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *nextnode;
	unsigned int i;

	temp = *head;
	if (index == 0)
	{
		nextnode = temp;
		temp = temp->next;
	}
	else
	{
		for (i = 0; i < index - 1; i++)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
		}
		nextnode = temp->next;
		temp->next = nextnode->next;
	}
	free_listint2(&nextnode);
	return (1);
}
