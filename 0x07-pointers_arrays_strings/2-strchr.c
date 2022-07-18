#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string
 * @c: character to be located
 * Return: pointer to the first occurence of the character c in the string s
 * returns NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i, j, flag;

	flag = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			for (j = 0; s[i + j] != '\0'; j++)
			{
				*(s + j) = *(s + i + j);
				flag = 1;
			}
			break;
		}
	}
	if (flag == 1)
		return (s);
	else
		return (NULL);
}
