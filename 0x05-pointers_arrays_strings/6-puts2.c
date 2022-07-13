#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: pointer string to be printed
 * Return: nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; ; i++)
	{
		if (str[i] == '\0')
			break;

		if (i % 2 != 1)
			_putchar(str[i]);
	}
	_putchar('\n');
}
