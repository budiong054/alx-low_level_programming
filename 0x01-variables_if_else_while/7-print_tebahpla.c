#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followes by a new line.
 * Return: 0 if successful, otherwise
 * return a non-zero
 */

int main(void)
{
	char ch;

	ch = 'z';
	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
