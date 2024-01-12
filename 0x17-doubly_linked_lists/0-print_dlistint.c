#include "lists.h"

/**
 * print_dlistint - entry to print doubly linked list
 * @h: pointer to address of the head node
 * Return: size of list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
