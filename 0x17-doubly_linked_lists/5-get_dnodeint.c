#include "lists.h"
/**
 * get_dnodeint_at_index - returns a node at a given index
 * @head: pointer to the current head node
 * @index: index of the node to be returned
 * Return: address of node at a specific index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
