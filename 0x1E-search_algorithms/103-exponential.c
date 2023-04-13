#include "search_algos.h"

/**
 * min - return the smallest integer
 * @x: The first integer
 * @y: The second integer
 *
 * Return: The smallest integer
 */

int min(int x, int y)
{
	if (x <= y)
		return (x);
	else
		return (y);
}

/**
 * print_array - print the array given the beginning and ending index
 * @array: The pointer to the array to be printed
 * @begin: The begin index
 * @end: The end index
 *
 * Return: Nothing
 */

void print_array(int *array, size_t begin, size_t end)
{
	printf("Searching in array: ");

	while (begin <= end)
	{
		if (begin != end)
			printf("%d, ", array[begin]);
		else
			printf("%d\n", array[begin]);
		begin++;
	}
}


/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the exponential search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where value is located or -1 if array is NULL
 * or its not present
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t j, i = 1;
	size_t m;

	if (!array || !size)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	j = i / 2;
	i = min(i, size - 1);
	printf("Value found between indexes [%ld] and [%ld]\n", j, i);

	while (j <= i)
	{
		print_array(array, j, i);

		m = (j + i) / 2;
		if (array[m] < value)
			j = m + 1;
		else if (array[m] > value)
			i = m - 1;
		else
			return (m);
	}

	return (-1);
}
