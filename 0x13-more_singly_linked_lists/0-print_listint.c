#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all elements of singly linked list
 * @h: head of list
 * Return: number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while(h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
