#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - function that reverses a list
 * @head: head pointer
 * Return: 0
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
