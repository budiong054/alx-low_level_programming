#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to strings
 * Return: pointer to the capitalized string
 */

char *cap_string(char *str)
{
	int i, j;
	char sper[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{',  '}'};

	for (i = 0; str[i] != 0; i++)
	{
		if (i == 0 && str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		for (j = 0; j < 13; j++)
		{
			if (str[i] == sper[j])
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
					str[i + 1] = str[i + 1] - 32;
				else
					str[i + 1] = str[i + 1];
			}
		}
	}
	return (str);
}
