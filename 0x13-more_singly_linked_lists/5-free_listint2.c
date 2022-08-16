#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: a pointer to the address of the head node
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	free(*head);
	*head = NULL;
}
