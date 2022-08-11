#include "lists.h"
#include <string.h>

int _strlen(const char *s);
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: a pointer to the first node
 * @str: a pointer to the string
 *
 * Return: the address of the new element, or NULL if its failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *lastNode;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		lastNode = *head;
		while (lastNode->next != NULL)
			lastNode = lastNode->next;
		lastNode->next = new;
	}
	return (new);
}

/**
 * _strlen - returns the length of a string
 * @s: a pointer to the string
 * Return: the length of a string
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
