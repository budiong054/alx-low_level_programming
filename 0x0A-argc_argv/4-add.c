#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: number of argument passed
 * @argv: arrays of pointers to the arguments
 * Return: 0 if successful, otherwise return 1
 */

int main(int argc, char **argv)
{
	int i, add;

	if (argc == 1)
		printf("0\n");
	else
	{
		add = 0;
		for (i = 1; i < argc; i++)
		{
			if (**(argv + i) < '0' || **(argv + i) > '9')
			{
				printf("Error\n");
				return (1);
			}
			add += atoi(*(argv + i));
		}
		printf("%d\n", add);
	}
	return (0);
}
