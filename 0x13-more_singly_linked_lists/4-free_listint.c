#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: a pointer to the head node
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
