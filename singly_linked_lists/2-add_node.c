#include "lists.h"
#include <string.h>

/**
 * add_node - Function that adds a new node at the beginning of a list_t list.
 * @head: Head of the list_t list.
 * @str: The string that needs to be duplicated.
 * Return: The & of th`e new element, or NULL if failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (*head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t)); /*allocating node*/

	new_node->str = strdup(str); /*put in the data*/

	new_node->next = (*head); /*make next of new_node as head*/

	(*head) = new_node; /*move the head to point to the new_node*/

	return (new_node);
}
