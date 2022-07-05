#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @num: integer to compute absolute value
 * Return: an absolute value
 */

int _abs(int num)
{
	int num1;

	num1 = -1 * num;
	if (num < 0)
	{
		return (num1);
	}
	else if (num > 0)
	{
		return (num);
	}
	else
	{
		return (0);
	}
}
