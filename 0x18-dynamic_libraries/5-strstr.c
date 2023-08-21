#include <stdio.h>
#include "main.h"

/**
 * _strstr - where to enter data
 * @haystack: data to enter
 * @needle: data to enter
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *first = haystack;
		char *second = needle;

		while (*first == *second && *second != '\0')
		{
			first++;
			second++;
		}

		if (*second == '\0')
			return (haystack);
	}
	return (NULL);
}
