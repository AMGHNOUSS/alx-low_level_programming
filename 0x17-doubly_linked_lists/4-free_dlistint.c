#include "lists.h"
/**
 * free_dlistint - free a dlistint_t list.
 * @head: pointer
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *next = head->next;
		free(head);
		head = next;
	}
}
