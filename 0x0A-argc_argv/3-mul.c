#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of argument supplied
 * @argv: arrays of pointers to strings supplied
 * Return: 0 if the program recieve two argument,
 * otherwise return 1
 */

int main(int argc, char **argv)
{
	int i, mul;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	mul = 1;
	for (i = 1; i < argc; i++)
		mul *= atoi(*(argv + i));
	printf("%d\n", mul);
	return (0);
}
