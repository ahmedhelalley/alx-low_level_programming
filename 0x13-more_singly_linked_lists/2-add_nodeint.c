#include "lists.h"
/**
 * add_nodeint - adding a node at the beginning
 * @head: pointer to the first node
 * @n: the vslue of the new node
 * Return: new node pointer (address)
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;
	if (*head)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
