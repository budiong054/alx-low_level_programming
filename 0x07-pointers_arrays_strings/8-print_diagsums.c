#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: pointer to array
 * @size: size of square matrix
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	unsigned int sum1, sum2;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += a[i][j];

			if ((i + j) == (size - 1))
				sum2 += a[i][j];
		}
	}
	printf("%u, %u", sum1, sum2);
}
