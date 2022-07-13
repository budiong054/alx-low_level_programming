#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: pointer string to be printed
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, j, len;

	len = 0;
	for (i = 0; ; i++)
	{
		if (str[i] == '\0')
			break;
		len += 1;
	}

	if (len % 2 == 0)
	{
		for (j = len / 2; j < len; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = (len - 1) / 2; j < (len - 1); j++)
		{
			_putchar(str[j + 1]);
		}
	}

	_putchar('\n');
}
