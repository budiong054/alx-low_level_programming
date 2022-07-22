#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 *
 * @argc: counter of arguments supplied to the program
 * @argv: an array of pointers to the strings supplied
 * Return: 0 Always sucessful
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
