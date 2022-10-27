#include "lists.h"

/**
 * sum_listint - sum of values of all nodes
 * @head: head of singly linked list
 * Return: sum of all node values
 */
int sum_listint(listint_t *head)
{
	listint_t *current_node = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (current_node)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
