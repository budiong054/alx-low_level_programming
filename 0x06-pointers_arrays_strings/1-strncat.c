#include "main.h"

/**
 * _strncat - concatenates two strings with at most n byte from the src
 * @dest: a pointer to the destination string
 * @src: a pointer to the source string
 * @n: the number of string to be appended to the src string
 * Return: a pointer to the resulting string destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;
	while (dest[len] != '\0')
		len++;

	for (i = 0; i < n && src[i] != 0; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';

	return (dest);
}
