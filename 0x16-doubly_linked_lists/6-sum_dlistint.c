#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data of a linked list
 * @head: head of the linked list
 *
 * Return: returns the sum of the nodes, or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *runner;

	if (head == NULL)
		return (0);
	sum = 0;
	runner = head;
	while (runner != NULL)
	{
		sum += runner->n;
		runner = runner->next;
	}
	return (sum);
}
