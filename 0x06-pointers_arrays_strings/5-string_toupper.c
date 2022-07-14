#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: pointer to string to be converted
 * Return: pointer to an uppercase string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		else
			str[i] = str[i];
	}
	return (str);
}
