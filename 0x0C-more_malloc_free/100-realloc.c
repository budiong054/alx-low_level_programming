#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size in byte of the allocated space for ptr
 * @new_size: new size in byte of the new memory block
 * Return: a pointer to the newly allocated memory else return NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str, *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	str = malloc(new_size);
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			str[i] = old_ptr[i];
	}
	else
		for (i = 0; i < old_size; i++)
			str[i] = old_ptr[i];
	free(ptr);
	return (str);
}
