#include "lists.h"
/**
 * reverse_listint - Reverse a listint linked list.
 * @head: Singly linked list
 * Return: Integer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *h, *before_h = NULL;

	if (!head)
		return (0);
	if (!(*head))
		return (0);
	if (!((*head)->next))
		return (*head);
	while (*head)
	{
		h = (*head)->next;
		(*head)->next = before_h;
		before_h = *head;
		*head = h;
	}
	*head = before_h;
	return (*head);
}
