#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function given as parameter on element of array
 * @array: element of an array
 * @size: size of array
 * @action: pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index = 0;

	if (action != NULL && array != NULL && size > 0)
	{
		while (index < size)
		{
			action(array[index]);
			index++;
		}
	}
}
