#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: count of the arguments supplied
 * @argv: arrays of pointers to the supplied string
 * Return: 0 Always
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", *argv++);
	return (0);
}
