#include "lists.h"
/**
 * free_list - Free list a list_t list.
 * @head: Singly linked list
 * Return: Nothings
 */
void free_list(list_t *head)
{
	list_t *p;

	while (head)
	{
		p = head->next;
		free(head->str);
		free(head);
		head = p;
	}
}
