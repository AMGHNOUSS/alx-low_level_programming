#include "lists.h"
/**
 * free_listint2 - free a listint_t list.
 * @head: Head of a list.
 * Return: Nothings
 */
void free_listint2(listint_t **head)
{
	listint_t **h = head, *pos;

	if (h)
	{
		while (*head)
		{
			pos = *head;
			free(pos);
			*head = (*head)->next;
		}
		*h = NULL;
	}
}
