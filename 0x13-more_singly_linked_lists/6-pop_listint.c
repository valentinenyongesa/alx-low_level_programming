#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - deletes head node of alist
 * @head: head pointer
 * Return: head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (head == NULL)
		return (0);
	while (*head)
	{
		num = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	return (num);
}
