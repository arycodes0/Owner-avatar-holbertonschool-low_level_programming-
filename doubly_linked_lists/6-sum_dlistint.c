#include "lists.h"

/**
 * sum_dlistint - Function that prints list
 * @head: head of the list
 * Return: lenght of the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
