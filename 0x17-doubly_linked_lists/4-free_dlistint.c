#include "lists.h"

/**
 * free_dlistint - free a dlistint list
 * @head: head of linked list
 * Return: Always 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_node;

	while (head)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}
