#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * list_len - retirn number of elements in a linked list
 * @h: head pointer
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
