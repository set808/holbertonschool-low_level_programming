#include "lists.h"
/**
 * sum_listint - returns the sum of all the elements in a linked list
 * @head: the linked list
 *
 * Return: returns the number of elements in a linked list
 */

int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
