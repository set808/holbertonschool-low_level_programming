#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end of a doubly linked list
 * @head: pointer to the head of the linked lsit
 * @n: number to be stored in new node
 *
 * @Return: returns the address of the new element or NULL on failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *runner;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return(new);
	}

	runner = *head;
	while (runner->next != NULL)
		runner = runner->next;
	runner->next = new;
	new->prev = runner;
	new-> next = NULL;
	return (new);
}
