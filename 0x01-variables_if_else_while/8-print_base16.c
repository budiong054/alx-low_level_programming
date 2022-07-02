#include <stdio.h>

/**
 * main - prints all the numbers of base 16
 * in lowercase, followed by a new line.
 * Return: 0 if successful, otherwise
 * return a non-zero
 */

int main(void)
{
	char num;

	num = '0';
	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	num = 'a';
	while (num <= 'f')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
