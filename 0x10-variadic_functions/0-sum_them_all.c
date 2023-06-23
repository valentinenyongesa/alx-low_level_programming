#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns sum of all arguments
 * @n: constant integer
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int index, sum = 0;

	va_start(ap, n);

	for (index = 0; index < n; index++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
