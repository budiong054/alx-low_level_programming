#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: 0 if successful
 */

int main(void)
{
	long int sum;
	int i;

	sum = 0;
	for (i = 0; i <= 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
