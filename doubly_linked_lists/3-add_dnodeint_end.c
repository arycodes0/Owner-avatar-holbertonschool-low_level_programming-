#include "lists.h"

/**
 * add_dnodeint_end - Function that adds a new node at the end of the list.
 * @head: Head of the list.
 * @n: Data
 * Return: the new_node, or NULL if failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node , *temp;

	new_node = malloc(sizeof(dlistint_t));

	new_node->n = n;

	if (*head == NULL)
		*head = new_node;
	else
	{

	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}



	temp->next = new_node;
	new_node->prev = temp;
	}

	return (new_node);
}
