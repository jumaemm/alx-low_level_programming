#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - delete the head of linked list
 * @head: head of the linked list
 * Return: valur of node or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_node = *head;
	int node_value;

	if (*head == NULL)
		return (0);
	node_value = (*head)->n;
	*head = temp_node->next;
	free(temp_node);
	return (node_value);
}
