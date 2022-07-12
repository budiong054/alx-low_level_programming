#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: a pointer to the string
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int i, length;

	length = 0;
	for (i = 0; ; i++)
	{
		if (s[i] == '\0')
			break;
		length += 1;
	}
	return (length);
}
