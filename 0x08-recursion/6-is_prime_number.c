#include <stdio.h>
#include "main.h"

int find_prime(int n, int r);
/**
 * is_prime_number - return 1 if number is prime and 0 if otherwise
 * @n: number to be checked whether prime or not
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	return (find_prime(n, 1));
}
/**
 * find_prime - return 1 if number is prime and 0 if otherwise
 * @n: number to be checked whether prime or not
 * @r: number of iterations
 * Return: 1 if prime 0 if not
 */

int find_prime(int n, int r)
{
	if (n <= 1)
		return (0);
	if (n % r == 0 && r > 1)
		return (0);
	if ((n / r) < r)
		return (1);
	return (find_prime(n, r + 1));
}
