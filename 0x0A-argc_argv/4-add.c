#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: number of argument passed
 * @argv: arrays of pointers to the arguments
 * Return: 0 if successful, otherwise return 1
 */

int main(int argc, char *argv[])
{
	int i, j, k;
	int add;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	if (argc == 1)
		printf("0\n");
	else
	{
		add = 0;
		for (k = 1; k < argc; k++)
			add += atoi(argv[k]);
		printf("%d\n", add);
	}
	return (0);
}
