#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: 0 if they are same
 * returns -ve integer if the first string is less than the second string
 * returns +ve integer if the first string is greater than the second string
 */

int _strcmp(char *s1, char *s2)
{
	int i, diff, flag, len, len1, len2;

	diff = 0;
	flag = 0;
	len1 = 0;
	len2 = 0;
	while (s1[len1] != 0)
		len1++;
	while (s2[len2] != 0)
		len2++;
	if (len1 <= len2)
		len = len2;
	else
		len = len1;
	for (i = 0; i < len; i++)
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		return (diff);
	else
		return (0);
}
