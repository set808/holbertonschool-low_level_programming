#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: the linked list
 *
 * Return: returns the number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: linked list
 * @index: the index of element to return
 *
 * Return: returns the nth node or NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	if (index >= listint_len(head))
		return (NULL);
	x = 0;
	while (x < index)
	{
		head = head->next;
		x++;
	}
	return (head);
}
