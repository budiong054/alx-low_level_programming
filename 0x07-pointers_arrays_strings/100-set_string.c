#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer string to be set
 * @to: pointer to a char
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	int i;

	for (i = 0; to[i] != '\0'; i++)
		**(s + i) = *(to + i);
}
