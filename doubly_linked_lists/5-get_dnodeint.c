#include "lists.h"

/**
 * get_dnodeint_at_index - finds the node at the given index
 * @head: beggining of list
 * @index: number of link to find
 * Return: the searched for node
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *new_node;
	unsigned int counter;

	counter = 0;
	new_node = head;

	while (new_node != NULL)
	{
		if (counter == index)
			return (new_node);
		i++;
		new_node = new_node->next;
	}
	if (new_node == NULL)
		return (NULL);
	else
		return (new_node);

}
