#include "main.h"

/**
 * _len - returns the length of a string
 * @str: a pointer to the string
 * Return: the length of a string
 */

int _len(char *str)
{
	int i, length;

	length = 0;
	for (i = 0; ; i++)
	{
		if (str[i] == '\0')
			break;
		length += 1;
	}
	return (length);
}

/**
 * rev_string - reverses a string
 * @s: pointer to string we want to modify
 * Return: nothing
 */

void rev_string(char *s)
{
	char temp;
	int j;
	int len, len1;

	len = _len(s);
	len1 = len - 1;
	for (j = 0; j < len / 2; j++)
	{
		temp = s[j];
		s[j] = s[len1];
		s[len1--] = temp;
	}
}
