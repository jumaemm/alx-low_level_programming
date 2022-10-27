#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at given index
 * @head: head of singly linked list
 * @idx: index where node is to be added
 * @n: n value of the node
 * Return: inserted node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int position = 0;
	listint_t *current_node = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL && idx > 0)
	{
		free(new_node);
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (position < idx)
	{
		if (position == idx - 1)
		{
			new_node->next = current_node->next;
			current_node->next = new_node;
			return (new_node);
		}
		position += 1;
		current_node = current_node->next;
	}
	free(new_node);
	return (NULL);
}
