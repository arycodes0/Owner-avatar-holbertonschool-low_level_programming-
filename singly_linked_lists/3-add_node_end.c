#include "lists.h"

/**
 * add_node_end - Function that adds a new node at the end of a list_t list.
 * @head: Head of the list_t list.
 * @str: The string.
 * Return: The node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node = *head; /*Stores a pointer to the last node*/
	int length = 0;
	const char *temp = str; /*Temp pointer to traverse the str*/

	new_node = malloc(sizeof(list_t)); /*Allocating memory for the new node*/

	if (new_node == NULL)
	{
		return (NULL); /*Checking if memory allocation was successful*/
	}

	if (str == NULL)
	{
		new_node->str = NULL;
	}
	else
	{
		while (*temp != '\0')
		{
			length++;
			temp++;
		}

		new_node->str = strdup(str); /*Using strdup to duplicate the string*/

		if (new_node->str == NULL)
		{
			free(new_node); /*Free the allocated memory for new_node if strdup fails*/
			return (NULL);
		}
		new_node->len = length; /*Assign the length of the str*/
	}
	new_node->next = NULL; /*The next pointer of new_node should point NULL*/

	if (*head == NULL)
	{
		*head = new_node; /*If the list is empty, the new_node becomes the head*/
	}
	else
	{
		while (last_node->next != NULL)
		{
			last_node = last_node->next; /*Traverse the list until last_node*/
		}
		last_node->next = new_node; /*Adding the new_node after the last_node*/
	}
	return (new_node);
}
