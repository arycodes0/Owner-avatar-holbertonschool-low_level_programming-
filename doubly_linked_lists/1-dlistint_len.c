#include "lists.h"

/**
 * dlistint_len - Function that prints all the elements of a list_t list.
 * @h: The linked list.
 * Return: The counter.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
