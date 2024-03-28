#include "lists.h"

/**
 * print_dlistint - Function that prints all the elements of a list_t list.
 * @h: The linked list.
 * Return: The n.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int node = 0;

	while (h->next != NULL)
	{
		printf("[%d]\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
