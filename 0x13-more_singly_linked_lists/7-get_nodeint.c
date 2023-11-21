#include "lists.h"
/**
 * get_nodeint_at_index - return the node at nth index
 * @head: pointer to the first node
 * @index: the index of the wanted node to be returned
 * Return: node at nth index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int n;

	for (node = head, n = 0; node && n < index; node = node->next, n++)
		;
	return (node);
}
