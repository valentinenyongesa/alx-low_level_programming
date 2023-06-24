#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of type of arguments passed to the function
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	int index = 0;
	char *string, *sep = " ";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[index])
		{
			switch (format[index])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					string = va_arg(list, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s\n", sep, string);
					break;
				default:
					index++;
					continue;
			}
			sep = ", ";
			index++;
		}
	}
}
