#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _realloc - function reallocates memory block using malloc and free
 * @ptr: pointer to memory previously allocated by malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		newptr = malloc(new_size);

		if (newptr == NULL)
			return (NULL);
		return (newptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	newptr = malloc(new_size);

	if (newptr == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
	{
		newptr[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (newptr);
}

