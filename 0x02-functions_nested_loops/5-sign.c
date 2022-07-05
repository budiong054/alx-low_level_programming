#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number to be checked and printed
 * Return: 1 and prints + if n is greater than zero
 * return 0 and prints 0 if n is zero
 * return -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
