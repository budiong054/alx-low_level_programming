#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to be searched for
 *
 * Return: The first index where value is located or -1 if not found
 * or array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	/* Let a and b the lower and upper limit*/
	size_t a, b;
	size_t m = sqrt(size); /* the block size */

	if (!array)
		return (-1);

	a = b = 0;
	while (b < size && array[b] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", b, array[b]);
		a = b;
		b += m;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", a, b);

	while (array[a] < value && a < b)
	{
		if (a >= size)
			return (-1);

		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		a++;
	}

	if (array[a] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		return (a);
	}

	return (-1);
}
