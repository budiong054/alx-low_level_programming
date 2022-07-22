#include <stdio.h>

/**
 * main - prints the number of arguments passed into it,
 * followed by a new line
 * @argc: count of the arguments passed
 * @argv: arrays of pointer to the string passed
 * Return: 0 Always successful
 */

int main(__attribute__((unused)) int argc,
		__attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
