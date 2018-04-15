#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of the linked list
 *
 * Return: returns the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i;
	dlistint_t *runner;

	if (h == NULL)
		return (0);
	if (h->next == NULL)
	{
		printf("%d\n", h->n);
		return (1);
	}

	i = 0;
	runner = h->next;
	runner = runner->prev;
	while (runner)
	{
		printf("%d\n", runner->n);
		runner = runner->next;
		i++;
	}
	return (i);
}
