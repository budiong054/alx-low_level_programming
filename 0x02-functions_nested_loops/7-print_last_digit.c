#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @num: number to print its last digit
 * Return: the last digit
 */

int print_last_digit(int num)
{
	int rem;

	if (num < 0)
	{
		num = -num;
	}
	else
	{
		num = num;
	}
	rem = num % 10;
	_putchar(rem + '0');
	return (rem);
}
