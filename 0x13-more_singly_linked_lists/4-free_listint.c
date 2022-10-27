#include "lists.h"
#include <stdio.h>

/**
 * free_listint - free memory allocated for linked list
 * @head: head of linked list
 * Return: Always 0
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
