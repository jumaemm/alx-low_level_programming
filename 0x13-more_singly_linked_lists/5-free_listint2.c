#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - free memory allocated to linked list
 * @head: head of linked list
 * Return: Always 0
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (*head == NULL)
		return;
	while (*head)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}
	*head = NULL;
}
