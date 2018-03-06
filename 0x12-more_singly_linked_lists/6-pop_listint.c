#include "lists.h"
/**
 * pop_listint - deletes head node and returns it's data
 * @head: pointer to the head of the linked list
 *
 * Return: returns the head node's data, or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	int number;
	listint_t *tmp;

	if (head == NULL)
		return (0);
	number = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (number);
}
