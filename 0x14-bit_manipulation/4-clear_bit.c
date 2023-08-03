#include "main.h"

/**
 * clear_bit - value of a bit to 0 at a given index
 * @n: pointer to number to change
 * @index: index of bit to clear
 * Return: 1 if it worked, or -1 if an error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
