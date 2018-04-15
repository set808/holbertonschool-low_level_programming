#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head of the linked list
 *
 * Return: returns the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i;
	dlistint_t *runner;

	if (h == NULL)
		return (0);
	if (h->next == NULL)
		return (1);
	i = 0;
	runner = h->next;
	runner = runner->prev;
	while (runner)
	{
		i++;
		runner = runner->next;

	}
	return (i);
}
