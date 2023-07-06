#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int slen = strlen(b);
	int total = 0;
	int decval = 1;
	int i;

	for (i = (slen - 1); i >= 0; i--)
	{
		if (b[i] == '1')
			total += decval;
		decval *= 2;

		if (b[i] < '0' || b[i] > '1')
			return (0);
	}
	return (total);
}
