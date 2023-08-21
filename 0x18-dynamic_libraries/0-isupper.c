#include <stdio.h>
#include "main.h"

/**
 * _isupper - finds lower case characters
 * @c: character to find
 * Return: 1 for uppercase 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
