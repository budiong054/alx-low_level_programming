#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to the first node
 *
 * Return: The length of the doubly linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t len = 0;

	temp = h;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}
