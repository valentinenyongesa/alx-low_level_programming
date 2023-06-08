#include <stdio.h>
#include <string.h>
#include "main.h"

int cmp_string(char *s1, char *s2);
/**
 * wildcmp - compares strings and returns 1 if identical, otherwise 0
 * @s1: first string
 * @s2: second string
 * Return: 1 if strings are similar and 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	return (cmp_string(s1, s2));
}
/**
 * cmp_string - compares strings and returns 1 if identical, otherwise 0
 * @s1: first string
 * @s2: second string
 * Return: 1 if strings are similar and 0 if not
 */

int cmp_string(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (cmp_string(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}

	if (*s2 == '*')
	{
		return (cmp_string(s1 + 1, s2) || cmp_string(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (cmp_string(s1 + 1, s2 + 1));
	}
	return (0);
}
