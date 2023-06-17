#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - function creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: 0
 */
int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);
	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}

	return (a);
}
