#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string
 * @accept: pointer to the substring
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int d;
	int i, j, flag;

	d = 0;
	for (i = 0; *s != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				d++;
				flag = 1;
			}
		}
		if (flag == 0)
			return (d);
		s++;
	}
	return (0);
}
