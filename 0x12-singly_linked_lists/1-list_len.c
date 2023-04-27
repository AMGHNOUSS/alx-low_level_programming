#include "lists.h"
/**
 * list_len - Return the number of elements in a linked list_t list.
 * @h: Singly linked list
 * Return: the number of node
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
		h = h->next, i++;
	return (i);
}
