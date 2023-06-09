#include <stdio.h>
#include <math.h>

/**
 * _pow_recursion - function return the x power y
 * @x: input
 * @y: input
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
