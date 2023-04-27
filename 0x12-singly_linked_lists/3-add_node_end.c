#include "lists.h"
/**
 * add_node_end - Add a new node at the end of a list
 * @head: Singly linked list
 * @str: String
 * Return: The address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h = (list_t *)malloc(sizeof(list_t *));
	list_t *last = *head;

	if (!h)
		return (0);
	h->str = strdup(str);
	h->len = strlen(str);
	h->next = NULL;
	if (!(*head))
	{
		*head = h;
		return (*head);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = h;
	return (*head);
}
