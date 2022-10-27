#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at given index
 * @head: head of linked list
 * @index: index of node to delete
 * Return: 1 on success, -1 on fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = *head;
	unsigned int i = 0;
	listint_t *temp_node;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp_node = *head;
		*head = (*head)->next;
		free(temp_node);
		return (1);
	}
	while (i <= index)
	{
		if (i == index - 1)
		{
			temp_node = current_node->next;
			current_node->next = temp_node->next;
			free(temp_node);
			return (1);
		}
		current_node = current_node->next;
		i++;
	}
	return (-1);
}
