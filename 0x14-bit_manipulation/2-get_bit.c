#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer
 * @index: index
 * Return: value of the bit at index index or -1 if an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;
	return (bit_val);
}
