#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum number
 * @max: maximum number
 * Return: a pointer to the newly created array
 * returns NULL if malloc fails or min > max
 */

int *array_range(int min, int max)
{
	int *arr, diff, i;

	if (min > max)
		return (NULL);

	diff = max - min;
	arr = malloc(sizeof(int) * (diff + 1));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i <= diff && i != max; i++)
	{
		arr[i] = min;
		min++;
	}
	arr[i] = max;

	return (arr);
}

