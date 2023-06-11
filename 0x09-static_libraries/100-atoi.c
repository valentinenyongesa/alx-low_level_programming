#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert string to integre
 * @s: pointer to the string to convert
 * Return: convertyed integrs
 */
int _atoi(char *s)
{
	int r = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[r])
	{
		if (s[r] == 45)
		{
			min *= -1;
		}
		while (s[r] >= 48 && s[r] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[r] - '0');
			r++;
		}
		if (isi == 1)
		{
			break;
		}
		r++;
	}
	ni *= min;
	return (ni);
}
