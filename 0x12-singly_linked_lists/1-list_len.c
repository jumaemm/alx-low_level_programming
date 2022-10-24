#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - return number of elements in a linked list
 * @h: head of a singly linked list
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
