#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - returns length of a string
 * @s: string to be checked
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return (length);
}
