#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * strtow - splits a string into words
 * @str: pointer to the string
 * Return: a pointer to an array of strings (words)
 * returns NULL function fails or if str == NULL or ""
 */

char **strtow(char *str)
{
	char **string;
	int i, j, k, old_i, len, count;
	char buffer[19684];

	len = _strlen(str);
	if (str == NULL || len == 0)
		return (NULL);

	i = 0;
	count = 0;
	k = 0;
	while (i < len)
	{
		while (i < len)
		{
			if (str[i] != ' ')
				break;
			i++;
		}

		old_i = i;
		while (i < len)
		{
			if (str[i] == ' ')
				break;
			i++;
		}
		if (i > old_i)
			count += 1;
	}

	string = malloc(sizeof(char *) * (count + 1));
	if (string == NULL)
		return (NULL);

	i = 0;
	while (i < len)
	{
		while (i < len)
		{
			if (str[i] != ' ')
				break;
			i++;
		}

		j = 0;
		while (i < len)
		{
			if (str[i] == ' ')
				break;
			buffer[j] = str[i];
			i++;
			j++;
		}
		
		if (j  > 0)
		{
			buffer[j] = '\0';
			string[k] = malloc(sizeof(char) * _strlen(buffer));
			if (string[k] == NULL)
			{
				for (i = 0; i < k; i++)
					free(string[i]);
				free(string);
			}
			_strcpy(string[k], buffer);
			k++;
		}

	}
	string[k] = NULL;
	return (string);

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
