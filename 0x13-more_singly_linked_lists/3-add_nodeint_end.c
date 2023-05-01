#include "lists.h"
/**
 * add_nodeint_end - Add a node at the end of a listint_t
 * @head: Singly linked list
 * @n: Integer
 * Return: Integer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h;
	listint_t *last = *head;

	h = (listint_t *)malloc(sizeof(listint_t));
	if (!h)
		return (0);
	h->n = n;
	h->next = NULL;
	if (!(*head))
	{
		*head = h;
		return (*head);
	}
	while (last->next)
		last = last->next;
	last->next = h;
	return (*head);
}
