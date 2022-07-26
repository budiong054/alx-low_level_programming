#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: a pointer to the 2 dimensional array otherwise
 * return NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);
	for (i = 0; i < height; i++)
		arr[i] = malloc(sizeof(int) * width);
	if (arr == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			arr[j][k] = 0;
	}
	return (arr);
}
