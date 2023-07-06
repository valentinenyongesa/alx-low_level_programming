#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number to find binary representation
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n / 2);
	printf("%ld", n % 2);
}
