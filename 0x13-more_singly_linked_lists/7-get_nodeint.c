#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head node
 * @index: the index of the node, starting at 0
 *
 * Return: the pointer to the nth node and NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i <= index && head; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
