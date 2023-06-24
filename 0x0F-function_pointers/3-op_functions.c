#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - return sum of a and b
 * @a: first integer
 * @b: second integer
 * Return: 0
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - return difference of a and b
 * @a: first integr
 * @b: secong integr
 * Return: 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - return product of a and b
 * @a: first integer
 * @b: second integer
 * Return: 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - result of the division of a by b
 * @a: first integer
 * @b: second integr
 * Return: 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - remainder of the division of a by b
 * @a: first integr
 * @b: second integer
 * Return: 0
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
