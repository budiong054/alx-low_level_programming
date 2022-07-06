#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 * Return: nothing
 */

void jack_bauer(void)
{
	char num;
	char num2;
	char num3;
	char num4;

	num = '0';
	while (num <= '9')
	{
		num2 = 0;
		while (num2 <= '9')
		{
			num3 = '0';
			while (num3 <= '9')
			{
				num4 = '0';
				while (num4 <= '9')
				{
					_putchar(num);
					_putchar(num2);
					_putchar(':');
					_putchar(num3);
					_putchar(num4);
					num4++;
				}
				num3++;
			}
			num2++;
		}
		num++;
	}
}
