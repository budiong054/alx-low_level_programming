#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: The index of the value or -1 if not found or NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0; /* beginning index */
	size_t j = size; /* ending index */
	size_t m;

	if (!array)
		return (-1);

	while (i < j)
	{
		printf("Searching in array: \n");
		m = (i + j) / 2;

		if (array[m] < value)
			i = m + 1;
		else if (array[m] > value)
			j = m - 1;
		else
			return (m);
	}

	return (-1);
}
