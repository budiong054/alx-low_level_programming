#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to array to be reverse
 * @n: number of elements of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, len, temp;

	len = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		temp = *(a + i);
		*(a + i) = *(a + len);
		*(a + len--) = temp;
	}
}
