#include "3-calc.h"

/**
 * main - Entry point
 * @argc: number of argument
 * @argv: arrays of pointers to the argument
 * Return: Always 0, else exit with the status 98, 99 or 100
 * if the number of argument is wrong, if the operator does not match
 * or if you try to divde (/ or %) by 0 respectively
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (!get_op_func(argv[2]))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = (get_op_func(argv[2]))(num1, num2);
	printf("%d\n", result);
	return (0);
}
