#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * starting from 0, followed by new line.
 * Return: 0 if successful, otherwise
 * return a non-zero
 */

int main(void)
{
	char dg;

	dg = '0';
	while (dg <= '9')
	{
		putchar(dg);
		dg++;
	}
	putchar('\n');
	return (0);
}
