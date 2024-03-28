#include "lists.h"

/*
 * add_dnodeint - Function that adds a new node at the beginning.
 * @head: Head node.
 * @n: data of structure.
 * Return: The new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head != NULL)

	(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
