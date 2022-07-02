#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: 0 if successful, otherwise return a non-zero
 */

int main(void)
{
	int num;
	int num2;

	num = '0';
	while (num <= '9')
	{
		num2 = num + 1;
		while (num2 <= '9')
		{
			putchar(num);
			putchar(num2);
			if (num == '8' && num2 == '9')
			{
				num2++;
			}
			else
			{
				putchar(',');
				putchar(' ');
				num2++;
			}
		}
		num++;
	}
	putchar('\n');
	return (0);
}
