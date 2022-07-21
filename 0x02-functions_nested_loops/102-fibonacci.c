#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line.
 * Return: 0 if successful
 */

int main(void)
{
	int i, f1, f2, f3;

	f1 = 1;
	f2 = 2;
	f3 = 0;
	for (i = 1; i <= 50; i++)
	{
		if (i == 1)
			printf("%d", f1);
		else if (i == 2)
			printf(", %d", f2);
		else
		{
			f3 = f1 + f2;
			printf(", %u", f3);
			f1 = f2;
			f2 = f3;
		}
	}
	printf("\n");
	return (0);
}
