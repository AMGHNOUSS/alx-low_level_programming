#include "lists.h"
/**
 * print_list - Print all the elements of a list_t list.
 * @h: Singly linked list
 * Return: return the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if(h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		i++;
		h = h->next;
	}
	return (i);
}
