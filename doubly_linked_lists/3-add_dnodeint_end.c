#include "lists.h"

/**
 * add_dnodeint_end - Function that adds a new node at the end of the list.
 * @head: Head of the list.
 * @n: Data
 * Return: the new_node, or NULL if failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	while ((*head)->next != NULL)
	{
		(*head) = (*head)->next;
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = *head;

	if (*head != NULL)

		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
