#include "lists.h"
/**
 * free_listint - freeing a list
 * @head: pointer to the first element
*/
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
