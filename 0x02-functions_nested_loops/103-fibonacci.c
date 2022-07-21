#include <stdio.h>

/**
 * main - prints the sum of the even valued terms, followed by a new line
 *
 * Return: 0 if successful, otherwise return a nonzero
 */

int main(void)
{
	unsigned int f1, f2, f3, sum;

	f1 = 1;
	f2 = 2;
	f3 = 0;
	sum = 2;
	while (f3 < 4000000)
	{
		f3 = f1 + f2;
		if (f3 > 4000000)
			break;
		if (f3 % 2 == 0)
		{
			sum += f3;
		}
		f1 = f2;
		f2 = f3;
	}
	printf("%u\n", sum);
	return (0);
}
