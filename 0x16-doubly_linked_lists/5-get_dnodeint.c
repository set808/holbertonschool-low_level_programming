#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: head of the linked list
 * @index: the index of the node
 *
 * @Return: returns the node, or NULL if it doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *runner;
	unsigned int x;

	if (!head)
		return (NULL);
	runner = head;
	x = 0;
	while (runner != NULL)
	{
		if (x == index)
			return (runner);
		runner = runner->next;
		x++;
	}
	return (NULL);
}
