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

	if (*head == NULL)
	{
		free_listint2(head);
		return (-1);
	}
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		for (i = 0; i < index - 1; i++)
		{
			temp = temp->next;
			if (temp == NULL)
			{
				free_listint2(head);
				return (-1);
			}
		}
		nextnode = temp->next;
		temp->next = nextnode->next;
		free(nextnode);
	}
	return (1);
}
