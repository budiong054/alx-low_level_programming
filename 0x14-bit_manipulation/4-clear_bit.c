#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the integer
 * @index: index of the value to be set to 0
 *
 * Return: 1 if successful, -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index > 63)
		return (-1);
	m = 1 << index;
	*n &= ~m;
	return (1);
}
