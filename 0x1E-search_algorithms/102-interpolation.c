#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the interpolation search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in an array
 * @value: The value to search for
 *
 * Return: The first index where value is located or -1 if array is NULL
 * or not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low;
	size_t high;
	size_t pos;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;
	while ((value >= array[low]))
	{
		if (array[high] == array[low])
			break;
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			high = pos - 1;
		else
			return (pos);
	}

	if (value == array[low])
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		return (low);
	}

	return (-1);
}
