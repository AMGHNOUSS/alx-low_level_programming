#include "lists.h"
/**
 * add_node - Add a new node at the beginning of a list.
 * @head: Singly linked list
 * @str: String
 * Return: Singly Linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *h = (list_t *)malloc(sizeof(list_t *));

	if (!h)
		return (0);
	h->str = strdup(str);
	h->len = strlen(str);
	h->next = *head;
	*head = h;
	return (h);
}
