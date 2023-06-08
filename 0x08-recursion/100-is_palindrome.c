#include "main.h"
#include <stdio.h>
#include <string.h>

int check_palindrome(char *s, int r);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string to check whether palindrome
 * @r: input string
 * Return: 1 if palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	return (check_palindrome(s, 1));
}

/**
 * check_palindrome - check if number is palindrome
 * @s: string to be checked
 * @r: input string
 * Return: 1 for palindrome 0 if not
 */

int check_palindrome(char *s, int r)
{
	int len = strlen(s);

		if (s[r] != s[len - r - 1])
			return (0);
		else
			return (1);
	return (check_palindrome(s, r + 1));
}
