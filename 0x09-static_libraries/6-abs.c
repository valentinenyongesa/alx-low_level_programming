#include <stdio.h>
#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @n: number whosw absolute value is to be computed
 * Return: absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		int absolute_val;

		absolute_val = n * -1;
		return (absolute_val);
	}
	return (n);
}
