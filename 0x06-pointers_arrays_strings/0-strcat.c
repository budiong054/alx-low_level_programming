#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: pointer to destination
 * @src: pointer to source
 * Return: a pointer to the resulting string destination
 */

char *_strcat(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (dest[len] != '\0')
		len++;

	for (i = 0; ; i++)
	{
		if (src[i] == '\0')
		{
			dest[len + i] = src[i];
			break;
		}
		dest[len + i] = src[i];
	}
	return (dest);
}
