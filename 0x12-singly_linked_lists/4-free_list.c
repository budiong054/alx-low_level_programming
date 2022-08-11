#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: a pointer to the head node
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		free(head->str);
		head = head->next;
		free(tmp);
	}
}
