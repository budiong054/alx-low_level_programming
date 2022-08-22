#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 * @n: first integer
 * @m: second integer
 *
 * Return: the number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int bit;

	bit = n ^ m;
	while (bit > 0)
	{
		count++;
		bit &= (bit - 1);
	}
	return (count);
}
