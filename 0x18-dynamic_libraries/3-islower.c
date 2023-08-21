#include <stdio.h>
#include "main.h"

/**
 * _islower - checks whether character is lowercase
 * @c: character to be checked
 * Return: 1 if lowercase and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
