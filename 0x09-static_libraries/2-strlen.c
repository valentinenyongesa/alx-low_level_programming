#include <stdio.h>
#include "main.h"

/**
 * _strlen - find length of a string
 * @s: pointer to the string
 * Return: string length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
