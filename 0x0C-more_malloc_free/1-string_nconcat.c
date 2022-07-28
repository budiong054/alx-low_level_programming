#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: number bytes
 * Return: pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;
	s3 = malloc(sizeof(char) * (len1 + n + 1));
	if (s3 == NULL)
	{
		free(s3);
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		s3[i] = s1[i];
	}

	for (i = 0; i < n; i++)
	{
		s3[len1 + i] = s2[i];
	}

	s3[len1 + i] = '\0';

	return (s3);
}
