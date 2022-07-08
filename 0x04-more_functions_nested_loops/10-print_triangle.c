#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: the size of the traingle
 * Return: nothing
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j <= size - i; j++)
				if (j != size - i)
					_putchar(' ');
			for (k = 1; k <= i; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
