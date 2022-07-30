#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins  to make change
 * for an amount of money
 * @argc: number of argument passed
 * @argv: arrrays of pointers to argument passed
 * Return: 0 if successful, 1 on error
 */

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int i, cent, num;
	
	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);
	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}
	
	num = 0;
	for (i = 0; i < 5 && cent >= 0; i++)
	{
		while (cent >= coins[i])
		{
			num++;
			cent -= coins[i];
		}
	}
	printf("%d\n", num);
	return (0);
}
