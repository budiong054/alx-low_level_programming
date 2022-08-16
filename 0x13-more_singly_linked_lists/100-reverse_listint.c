#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 * @head: a pointer to the address of the head node
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *nextnode;
	listint_t *prevnode;

	prevnode = NULL;
	nextnode = *head;
	while (nextnode)
	{
		nextnode = nextnode->next;
		(*head)->next = prevnode;
		prevnode = *head;
		*head = nextnode;
	}
	*head = prevnode;
	return (*head);
}
