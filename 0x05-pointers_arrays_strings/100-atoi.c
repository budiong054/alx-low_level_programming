#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: pointer to string
 * Return: an integer if it contains one
 * otherwise return 0
 */

int _atoi(char *s)
{
	int i, flag, neg, digit, numbers;

	i = 0;
	flag = 0;
	neg = 0;
	digit = 0;
	numbers = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			++neg;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			numbers = numbers * 10 + digit;
			flag = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
		i++;
	}

	if (neg % 2 == 1)
		numbers = -numbers;


	if (flag == 1)
		return (numbers);
	else
		return (0);
}
