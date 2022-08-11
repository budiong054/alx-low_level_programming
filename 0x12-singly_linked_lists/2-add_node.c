#include "lists.h"
#include <string.h>

int _strlen(const char *s);

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the beginning of the node
 * @str: pointer to the string
 *
 * Return: a pointer to the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
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
