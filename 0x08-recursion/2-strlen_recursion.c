#include "main.h"
#include <stdio.h>
#include <string.h>

int string_length(char *s);
/**
 * _strlen_recursion - returns length of a string
 * @s: string to be checked
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	return (string_length(char *s));
}

/**
 * string_length - check length of a string
 * @s: string to be checked
 * Return: length of string
 */
int string_length(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += string_length(s + 1);
	}

	return (length);
}
