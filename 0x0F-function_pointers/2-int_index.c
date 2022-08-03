#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: a pointer to an array of integers
 * @size: number of element in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: the index of the first element in which cmp doesn't return 0
 * returns -1 if no match or size 0 or negeative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
