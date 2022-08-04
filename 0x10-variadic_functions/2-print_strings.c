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

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char *);
		if (str == NULL)
			str = "(nil)";

		if (!seperator)
			printf("%s", str);
		else if (seperator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", seperator, str);
	}
	printf("\n");
	va_end(arg);
}
