#include "lists.h"

/**
 * get_dnodeint_at_index - function that finds the node at the given index
 * @head: beggining of list
 * @index: number of link to find
 * Return: the searched for node
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new_node;
	unsigned int counter;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	counter = 0;
	temp = *h;

	if (idx == 0)
	{
		new_node->next = temp;
		temp->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (counter + 1 < idx)
	{
		temp = temp->next;
		counter++;
	}
	temp->next->prev = new_node;
	new_node->next = temp->next;
	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);

}
