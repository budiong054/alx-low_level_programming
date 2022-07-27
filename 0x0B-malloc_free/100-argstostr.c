#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen(char *s);
char *_strcat(char *dest, char *src);
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of argument
 * @av: arrays of pointers to the arguments
 * Return: a pointer to a new string otherwise return NULL
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int i, len;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]);
	}

	p = malloc(sizeof(char) * len);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		_strcat(p, av[i]);
		_strcat(p, "\n");
	}
	return (p);
}

/**
 * _strlen - returns the length of a string
 * @s: a pointer to the string
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int i, length;

	length = 0;
	for (i = 0; ; i++)
	{
		if (s[i] == '\0')
			break;
		length += 1;
	}
	return (length);
}

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
