#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: a pointer to the pointer to the first node
 * @n: The element in the node
 *
 * Return: The address of the new node or NULL if its fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head)
	{
		temp = *head;
		new->next = temp;
		temp->prev = new;
	}
	*head = new;
	return (new);
}
