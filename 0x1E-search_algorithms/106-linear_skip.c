#include "search_algos.h"

/**
 * linear_skip - Searches for value in sorted skip list of integers
 * @list: pointer to the head of the skip list to search in
 * @value: Value to search for
 * Return: NULL value is not present in list or if head is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	size_t i, step, a = 0, b = 0;
	skiplist_t *node, *next;

	if (!list)
		return (NULL);
	node = list;
	next = node->express ? node->express : node;
	while (next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)next->index, next->n);
		if (next->n >= value)
			break;
		node = next;
		if ((node->n < value) && (node->express == NULL))
		{
			while (next->next)
				next = next->next;
			break;
		}
		next = node->express ? node->express : node;
	}
	a = node->index;
	b = next->index;
	printf("Value found between indexes [%d] and [%d]\n", (int)a, (int)b);
	while (node)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)node->index, node->n);
		if (node->n == value)
			return (node);
		node = node->next;
	}
	return (NULL);
}
