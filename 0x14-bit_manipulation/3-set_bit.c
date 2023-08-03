#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: pointer to number to change
 * @index: index to set to 1
 * Return: 1 if it worked, or -1 error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
