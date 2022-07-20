#include "main.h"

/**
 * _pow_recursion - computes the value if x raised to power of y
 * @x: the based integer
 * @y: the index or power
 * Return: -1 if y is lower than 0 otherwise return the result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
