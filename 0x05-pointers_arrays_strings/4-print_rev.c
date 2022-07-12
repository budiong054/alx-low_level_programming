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
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointer string to print
 * Return: nothing
 */

void print_rev(char *s)
{
	int j;
	int len;

	len = _len(s);
	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
