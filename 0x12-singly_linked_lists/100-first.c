#include <stdio.h>
#include <stdlib.h>

void start_up(void) __attribute__ ((constructor));
/**
 * start_up - print a string before the main function is executed
 *
 * Return: Nothing
 */

void start_up(void)
{
	char *str1 = "You're beat! and yet, you must allow,\n";
	char *str2 = "I bore my house upon my back!\n";

	printf("%s%s", str1, str2);
}
