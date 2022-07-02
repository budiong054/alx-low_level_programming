#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 if successful
 * otherwise return a non-zero
 */

int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
