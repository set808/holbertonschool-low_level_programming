#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @h: head of the linked list
 * @idx: the index of where to insert node
 * @n: new node's data
 *
 * Return: returns the address of the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *new, *runner;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	if (*h == NULL && idx == 0)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}

	count = 0;
	runner = *h;
	while (count < idx - 1)
	{
		if (runner == NULL)
			return (NULL);
		count++;
		runner = runner->next;
	}
	new->next = runner->next;
	new->next->prev = new;
	runner->next = new;
	new->prev = runner;
	return (new);
}
