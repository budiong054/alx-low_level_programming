#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

int _strlen(char *str);
char *_strcpy(char *dest, char *src);
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a pointer to the newly created structure
 * return NULL if thr funtion fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len1, len2;

	d  = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	len1 = _strlen(name);
	len2 = _strlen(owner);

	d->name = malloc(sizeof(char) * (len1 + 1));
	if (d->name == NULL)
	{
		free(d->name);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (len2 + 1));
	if (d->owner == NULL)
	{
		free(d->owner);
		return (NULL);
	}
	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;
	return (d);
}

/**
 * _strlen - computes the length of a string
 * @str: pointer to the string
 * Return: length of a string
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * _strcpy - copies string from src to dest
 * @src: source
 * @dest: destination
 * Return: a pointer to the string destination
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
