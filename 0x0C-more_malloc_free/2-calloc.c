#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of element
 * @size: size of byte each
 * Return: a pointer to the allocated memory
 * return NULL if malloc fails or the size or nmemb is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	s = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	return (s);

}
