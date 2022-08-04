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

	if (seperator == NULL)
		return;
	if (n == 0)
		return;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", va_arg(list, int));
			break;
		}
		printf("%d", va_arg(list, int));
		printf("%s", seperator);
	}
	va_end(list);
}
