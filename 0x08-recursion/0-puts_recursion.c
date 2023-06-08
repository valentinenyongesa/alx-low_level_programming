#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _puts_recursion - print a string followed by a new line
 * @s: string to be printed out
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
