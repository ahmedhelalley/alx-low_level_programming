#include <lists.h>
/**
 * list_len - number of elements function
 * @h: pointer
 * Return: size og lidt
*/
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
