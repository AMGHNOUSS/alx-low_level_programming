#include "lists.h"
/**
 * dlistint_len - return the number of elements in a linked dlistint_t list.
 * @h: pointer
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int cmp = 0;

	if (h == NULL)
		return (cmp);
	while (h != NULL)
	{
		cmp++;
		h = h->next;
	}
	return (cmp);
}
