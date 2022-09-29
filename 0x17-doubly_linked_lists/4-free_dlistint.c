#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to first node
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
