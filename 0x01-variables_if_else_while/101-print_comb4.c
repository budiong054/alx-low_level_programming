#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: 0 if successful, otherwise return a non-zero
 */

int main(void)
{
	int num;
	int num2;
	int num3;

	num = '0';
	while (num <= '9')
	{
		num2 = num + 1;
		while (num2 <= '9')
		{
			num3 = num2 + 1;
			while (num3 <= '9')
			{
				putchar(num);
				putchar(num2);
				putchar(num3);
				if (num == '7' && num2 == '8' && num3 == '9')
				{
					num3++;
				}
				else
				{
					putchar(',');
					putchar(' ');
					num3++;
				}
			}
			num2++;
		}
		num++;
	}
	putchar('\n');
	return (0);
}
