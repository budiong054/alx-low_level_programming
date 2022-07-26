#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: a pointer to the a newly allocated space in memory which contains
 * the concatenated string
 * return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, j, len1, len2, len3;

	len1 = 0;
	if (s1 == NULL)
		len1 = 0;
	else
	{
		while (s1[len1] != '\0')
			len1++;
	}

	len2 = 0;
	if (s2 == NULL)
		len2 = 0;
	else
	{
		while (s2[len2] != '\0')
			len2++;
	}

	len3 = len1 + len2;
	s3 = malloc(sizeof(char) * (len3 + 1));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		s3[i] = s1[i];
	for (j = 0; j < len2; j++)
		s3[len1 + j] = s2[j];
	s3[len3] = '\0';
	return (s3);
}
