#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and
 * then in uppercase, followed by a new line.
 * Return: 0 if successful
 * otherwise return a non-zero
 */

int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
