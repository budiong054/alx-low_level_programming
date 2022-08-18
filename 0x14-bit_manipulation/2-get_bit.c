#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to be checked
 * @index: index of the bit
 *
 * Return: the value of the bit at that particular index or
 * -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	if (n & m)
		return (1);
	else
		return (0);
}
