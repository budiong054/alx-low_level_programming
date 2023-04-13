#include "search_algos.h"

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
 * advanced_binary - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: The index of the value or -1 if not found or NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t i = 0; /* beginning index */
	size_t j = size - 1; /* ending index */
	size_t m;

	if (!array)
		return (-1);
}
