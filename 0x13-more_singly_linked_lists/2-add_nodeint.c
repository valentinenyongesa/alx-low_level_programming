#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - pointer to the new node added at beginning of list
 * @head: head pointer
 * @n: integer to add at list
 * Return: 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = (n);
	new->next = (*head);
	(*head) = new;

	return (*head);
}
