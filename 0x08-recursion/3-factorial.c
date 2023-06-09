#include <stdio.h>
#include "main.h"

/**
 * factorial - finds factorial of a given number
 * @n: number to deduce its factorial
 * Return: 0
 */

int factorial(int n)
{
	int fact;

	if (n == 1 || n == 0)
	{
		return (1);
	}

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		fact = n * factorial(n - 1);
		return (fact);
	}
}
