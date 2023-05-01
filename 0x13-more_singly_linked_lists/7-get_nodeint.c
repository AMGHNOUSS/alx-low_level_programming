#include "lists.h"
/**
 * get_nodeint_at_index - The nth node of a listint
 * @head: Singly linked list
 * @index: Integer
 * Return: Singly Linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *h;

	if (!head)
		return (0);
	h = head;
	while (h)
	{
		if (a == index)
			return (h);
		a++;
		h = h->next;
	}
	return (0);
}
