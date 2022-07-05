#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the allphabet in lowercase
 * followed by a new line
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	int n;
	char ch;

	n = 0;
	while (n < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		n++;
	}
}
