#include "lists.h"

/**
 * get_dnodeint_at_index - return nth node of doubly linked list
 * @head: head of linked list
 * @index: index of node
 * Return: NULL otherwise address of node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node_count = 0;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);
	current = head;
	while (node_count <= index && current)
	{
		if (node_count == index)
			return (current);
		node_count++;
		current = current->next;
	}
	return (NULL);
}
