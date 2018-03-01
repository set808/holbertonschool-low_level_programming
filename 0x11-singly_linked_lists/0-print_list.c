#include "lists.h"
#include <stdio.h>
/**
 * node_count - counts nodes in a linked list
 * @h: linked list
 *
 * Return: returns the number of nodes in a linked list
 */

size_t node_count(const list_t *h)
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
 * print_list - prints all the elements of a list_t
 * @h: list to be printed
 *
 * Return: returns the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count;

	count = node_count(h);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
