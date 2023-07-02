#include <stdio.h>
#include <stdlib.h>

void before(void) __attribute__ ((constructor));

/**
 * before - prints string before main function executed
 */

void before(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
