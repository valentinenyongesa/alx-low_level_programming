#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints elements of a node
 * @h: head
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
