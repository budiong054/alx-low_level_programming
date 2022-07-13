#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 * @dest: pointer to destination
 * @src: pointer to the source
 * Return: the pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; ; i++)
	{
		if (src[i] == '\0')
		{
			dest[i] = src[i];
			break;
		}
		dest[i] = src[i];
	}
	return (dest);
}
