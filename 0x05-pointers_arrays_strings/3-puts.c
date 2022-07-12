#include "main.h"

/**
 * _puts - prints a string, followed by a new linr, to stdout.
 * @str: a pointer string to print to stdout
 * Return: nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; ; i++)
	{
		if (str[i] == '\0')
			break;
		_putchar(str[i]);
	}
	_putchar('\n');
}
