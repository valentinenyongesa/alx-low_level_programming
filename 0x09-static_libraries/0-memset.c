#include <stdio.h>
#include "main.h"

/**
 * _memset - where to enter
 * @s: pointer to the character
 * @b: value to enter to the memory block
 * @n: number of bytes to fill
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
