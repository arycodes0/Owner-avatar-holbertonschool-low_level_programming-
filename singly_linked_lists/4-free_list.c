#include "lists.h"

/**
 * free_list - Function that frees a list_t list.
 * @head: The list to free.
 */

void free_list(list_t *head)
{
	list_t *libertad;

	while (head != NULL)
	{
		libertad = head;
		libertad->str = head->str;
		head = head->next;
		free(libertad->str);
		free(libertad);
	}
}
