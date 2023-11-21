#include "lists.h"
/**
 * listint_len - number of elements
 * @h: pointer to element
 * Return: i
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
