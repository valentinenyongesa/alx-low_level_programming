#include <stdio.h>
#include <math.h>
#include "main.h"

int sqrt_real(int n, int r);

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to find square root of
 * Return: squareroot
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_real(n, 0));
}

/**
 * sqrt_real - returns natural square root of a number
 * @n: number to find square root of
 * @r: count of number
 * Return: squareroot
 */
int sqrt_real(int n, int r)
{
	if (r * r > n)
		return (-1);
	if (r * r == n)
		return (r);
	return (sqrt_real(n, r + 1));
}
