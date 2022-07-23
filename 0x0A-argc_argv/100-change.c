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
	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	       printf("0\n");	
	return (0);
}
