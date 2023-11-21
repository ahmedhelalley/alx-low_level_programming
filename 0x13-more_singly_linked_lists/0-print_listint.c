#include "lists.h"
/**
 * print_listint - print rhe items in thr kust
 * @h: pointer to gitdt mofr
 * Return: i
*/
size_t print_listint(const listint_t *h)
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
