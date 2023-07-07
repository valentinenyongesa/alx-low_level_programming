#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - bits you would need to flip to get from one number to another
 * @n: number 1
 * @m: number 2
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}
	return (count);
}

