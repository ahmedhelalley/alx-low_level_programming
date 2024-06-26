#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a sorted list of integers
 * @list: the pointer to the head of the list to search in
 * @size: the number of nodes in the list
 * @value: the value to search for
 * Return: the pointer to the first node where value is located,
 * or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int i;
	int step = sqrt((int) size);
	listint_t *curr = list, *prev = list;

	if (!list)
		return (NULL);

	while (curr->n < value)
	{
		prev = curr;
		for (i = 0; i < step && curr->next; i++)
			curr = curr->next;

		printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);

		if (curr->index >= size - 1)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
			    prev->index, curr->index);
			return (search_list(prev, curr, value));
		}
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
		   prev->index, curr->index);

	return (search_list(prev, curr, value));
}

/**
 * search_list - searches for a value in a sorted list of integers
 * @start: the pointer to the head of the list to search in
 * @end: the pointer to the end of the list to search in
 * @value: the value to search for
 * Return: the pointer to the first node where value is located,
 */
listint_t *search_list(listint_t *start, listint_t *end, int value)
{
	while (start && start != end->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", start->index, start->n);
		if (value == start->n)
			return (start);
		start = start->next;
	}

	return (NULL);
}
