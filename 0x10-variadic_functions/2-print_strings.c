#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @seperator: pointer to the seperator string
 * @n: number of strings passed to the function
 *
 * Return: Nothing
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list arg;
	char *str;
	unsigned int i;

	if (seperator == NULL)
		return;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i == n - 1)
			printf("\n");
		else
			printf("%s", seperator);
	}
	va_end(arg);
}
