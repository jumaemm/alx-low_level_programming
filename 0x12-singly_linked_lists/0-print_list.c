#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - print all elements of a list
 * @h: head of singly linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", h->len);
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
