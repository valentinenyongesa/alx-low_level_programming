#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * get_nodeint_at_index - finds nth node of a list
 * @head: head pointer
 * @index: index of the nth node
 * Return: 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current && count < index)
	{
		current = current->next;
		count++;
	}
	return (current ? current : NULL);
}
