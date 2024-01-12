#include "lists.h"

/**
 * dlistint_len - returns the length of dlist
 * @h: pointer to the address of the head node
 * Return: the size of the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
