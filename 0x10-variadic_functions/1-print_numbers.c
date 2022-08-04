#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a newline
 * @seperator: pointer to the seperator string
 * @n: number of argument to be printed
 *
 * Return: Nothing
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	int num;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(list, int);
		if (!seperator)
			printf("%d", num);
		else if (seperator && i == 0)
			printf("%d", num);
		else
			printf("%s%d", seperator, num);
	}
	printf("\n");
	va_end(list);
}
