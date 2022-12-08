#include "lists.h"

/**
 * sum_dlistint - sum up values of nodes in linked list
 * @head: head of doublylinked list
 * Return: sum, otherwise 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_nodes = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum_nodes += head->n;
		head = head->next;
	}
	return (sum_nodes);
}
