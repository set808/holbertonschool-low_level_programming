#include "lists.h"
/**
 * free_dlistint - frees a linked list
 * @head: head of the linked list
 *
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_dlistint(head->next);
	free(head);
}
