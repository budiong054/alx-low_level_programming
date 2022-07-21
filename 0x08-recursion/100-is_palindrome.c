#include "main.h"

int str_len(char *s);
int string_cmp(char *s, int i, int len);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 *
 * @s: pointer to the string
 * Return: 1 if true and 0 if not
 */

int is_palindrome(char *s)
{
	return (string_cmp(s, 0, str_len(s)));
}

/**
 * str_len - computes the len of a string
 * @s: pointer to the string
 * Return: length of a string
 */

int str_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_len(s + 1));
}

/**
 * string_cmp - compares a string and check for palindormw
 * @s: pointer to the string
 * @len: length of a string
 * @i: counter from zero
 * Return: 1 if the are same, 0 otherwise
 */

int string_cmp(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (string_cmp(s, i + 1, len - 1));
}
