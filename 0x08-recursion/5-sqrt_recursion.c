#include "main.h"

int _actual_sqrt(int n, int i);

/**
 * _sqrt_recursion - computes the natural square root of a number
 *
 * @n: number
 * Return: -1 if n does not have a natural square root otherwise
 * return the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_actual_sqrt(n, 0));
}


/**
 * _actual_sqrt - compute the actual sqrt of a number
 * @n: number
 * @i: act like counter
 * Return: -1 if n does not have a natural square root otherwise
 * return i
 */

int _actual_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_actual_sqrt(n, (i + 1)));
}
