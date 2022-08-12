#include <stdio.h>
#include <stdlib.h>

void start_up(void) __attribute__ ((constructor));

void start_up(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
