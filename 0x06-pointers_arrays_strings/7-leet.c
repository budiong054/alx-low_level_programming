#include "main.h"

/**
 * leet - encodes a string into 1337
 * letters 'a' and 'A' should be replaced by 4
 * letters 'e' and 'E' should be replaced by 3
 * letters 'o' and 'O' should be replaced by 0
 * letters 't' and 'T' should be replaced by 7
 * letters 'l' and 'L' should be replaced by 1
 * @str: pointer to the string
 * Return: pointer to the encoded string
 */

char *leet(char *str)
{
	int i, j;
	char alp[5][2] = {{'a', 'A'}, {'e', 'E'},
		{'o', 'O'}, {'t', 'T'}, {'l', 'L'}};
	char cod[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != 0; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == alp[j][0] || str[i] == alp[j][1])
			{
				str[i] = cod[j];
				break;
			}
		}
	}
	return (str);
}
