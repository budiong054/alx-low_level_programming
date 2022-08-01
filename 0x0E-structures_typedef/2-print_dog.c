#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: an address to the struct
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else if (d->name)
			printf("Name: %s\n", d->name);

		if (!(d->age))
			printf("Age: (nil)\n");
		else if (d->age)
			printf("Age: %.6f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else if (d->owner)
			printf("Owner: %s\n", d->owner);
	}
}
