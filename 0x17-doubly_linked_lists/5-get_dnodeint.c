#include "lists.h"
/**
 * get_dnodeint_at_index - return the nth node of a dlistint_t linked list.
 * @head: pointer
 * @index: index of the node to return
 * Return: pointer
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = head;
	i = 0;
	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
