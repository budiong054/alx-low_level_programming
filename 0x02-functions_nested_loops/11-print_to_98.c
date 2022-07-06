#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: is the starting point
 * Return: nothing
 */

void _print(int n);

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			_print(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			_print(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	_putchar('\n');
}

/**
 * _print - prints a long integer from left to right
 * @n: long integer to be printed
 * Return: nothing
 */

void _print(int n)
{
	/* checks if n is negative and print - and convert n to positive */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* remove the last digit and recur */
	if (n / 10)
	{
		_print(n / 10);
	}

	_putchar((n % 10) + '0');
}
