#include "lists.h"
/**
 * sum_dlistint - sums the values of a dll
 * @head: pointer to the current head node
 * Return: sum of all values
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
