#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers followed
 * @separator - string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: 0
 */ 
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int index;

	va_start(numbers, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(numbers, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(numbers);
}
