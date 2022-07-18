#include "main.h"

/**
 * _memcpy - copies n byte from memory area src to memory area dest
 * @dest: pointer to string destination
 * @src: pointer to string source
 * @n: number of byte
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
