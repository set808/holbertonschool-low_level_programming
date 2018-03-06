#include "lists.h"
#include <stdio.h>
/**
 * node_count - counts nodes in a linked list
 * @h: linked list
 *
 * Return: returns the number of nodes in a linked list
 */

size_t node_count(const listint_t *h)
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
 * print_listint - prints all the elements of a listint_t
 * @h: list to be printed
 *
 * Return: returns the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = node_count(h);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
