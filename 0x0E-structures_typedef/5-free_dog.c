#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the dog
 * @d: pointer to the struct to be free
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
