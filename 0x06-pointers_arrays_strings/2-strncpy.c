#include "main.h"

/**
 * _strncpy - copies a string from of atmost n byte from src to dest
 * @dest: pointer to string destination
 * @src: pointer to string source
 * @n: number of string to be copied
 * Return: pointer to the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
