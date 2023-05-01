#include "lists.h"
/**
 * insert_nodeint_at_index - Insert a new node at given position of a listint
 * @head: Singly linked list
 * @idx: Integer
 * @n: Integer
 * Return: Singly Linked list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a = 1, b = 0;
	listint_t *after_h, *before_h, *h;

	if (!head)
		return (0);
	if (idx == 0)
	{
		h = (listint_t *)malloc(sizeof(listint_t));
		if (!h)
			return (0);
		h->n = n, h->next = *head, *head = h;
		return (h);
	}
	after_h = (*head)->next, before_h = *head;
	while (before_h)
		before_h = before_h->next, b++;
	before_h = *head;
	if (idx > b)
		return (0);
	while (before_h)
	{
		if (a == idx)
		{
			h = (listint_t *)malloc(sizeof(listint_t));
			if (!h)
				return (0);
			h->next = after_h, h->n = n, before_h->next = h;
			return (h);
		}
		a++, after_h = after_h->next, before_h = before_h->next;
	}
	return (0);
}
