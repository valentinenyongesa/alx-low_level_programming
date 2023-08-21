#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: bytes in src to be added to dest
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int r = 0, dest_len = 0;

	while (dest[r++])
		dest_len++;
	for (r = 0; src[r] && r < n; r++)
		dest[dest_len++] = src[r];
	return (dest);
}
