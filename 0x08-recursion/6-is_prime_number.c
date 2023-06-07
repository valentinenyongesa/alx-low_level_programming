#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - return 1 if number is prime and 0 if otherwise
 * @n: number to be checked whether prime or not
 * Return: 1 if prime 0 if not
 */

int is_prime_number(int n)
{
	int r, count = 0;

	for (r = 2; r < n; r++)
	{
		if (n % r == 0)
		{
			count++;
		}
	}
	if (count == 2)
	{
		return (1);
	}
	else
		return (0);
}
