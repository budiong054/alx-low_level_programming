#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 * Return: nothing
 */

void jack_bauer(void)
{
	int num;
	int num2;
	int num3;
	int num4;

	num = 0;
	while (num <= 2)
	{
		num2 = 0;
		while (num2 <= 9)
		{
			if (num == 2 && num2 == 4)
			{
				num += 9;
				break;
			}
			num3 = 0;
			while (num3 <= 5)
			{
				num4 = 0;
				while (num4 <= 9)
				{
					_putchar((num % 10) + 48);
					_putchar((num2 % 10) + 48);
					_putchar(':');
					_putchar((num3 % 10) + 48);
					_putchar((num4 % 10) + 48);
					_putchar('\n');
					num4++;
				}
				num3++;
			}
			num2++;
		}
		num++;
	}
}
