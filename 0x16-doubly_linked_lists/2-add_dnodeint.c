#include "lists.h"
/**
 * add_dnodeint - adds node at the beginning of a doubly linked list
 * @head: pointer to head of the linked list
 * @n: new number
 *
 * Return: returns the address of the new element, or NULL on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}
