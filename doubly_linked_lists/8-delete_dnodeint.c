#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: head
 * @index: location of node to delete
 * Return: -1 if fail 1 if succ
 */
int delete_nodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new_node, *temp;
	unsigned int idx;

	idx = 0;
	new_node = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = new_node->next;
		free(new_node);
		return (1);
	}
	while (idx != index)
	{
		temp = new_node;
		new_node = new_node->next;
		if (new_node == NULL)
			return (-1);
		idx++;
	}

	temp->next = new_node->next;
	free(new_node);
	return (1);
}