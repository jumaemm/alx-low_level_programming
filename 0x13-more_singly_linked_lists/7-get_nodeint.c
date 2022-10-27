#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint - get the node at a given index
 * @head: head of linked list
 * @index: index of the given node
 * Return: NULL or node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *wanted_node = head;
	unsigned int counter = 0;

	if (!head)
		return (NULL);

	while (wanted_node)
	{
		if (counter == index)
		{
			return (wanted_node);
		}
		else
		{
			wanted_node = wanted_node->next;
			counter += 1;
		}
	}
	return (NULL);
}
