#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free memory allocated to list
 * @head: head of singly linked list
 * Return: Always 0
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}
	free_list(head->next);
	free(head->str);
	free(head);
}
