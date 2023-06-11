#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: pointer to resulting dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_length = strlen(dest);
	int src_length = strlen(src);
	int size = dest_length + src_length + 1;
	char *s = calloc(size, sizeof(char));

	for (int i = 0; i < dest_length; i++)
		s[i] = dest[i];
	for (int i = 0; i < src_length; i++)
		s[dest_length + i] = src[i];
	s[size - 1] = '\0';
	return (s);
}
