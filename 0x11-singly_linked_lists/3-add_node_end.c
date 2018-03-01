#include "lists.h"
#include <string.h>
/**
 * _strlen - returns the length of a string
 * @s: string we find the length of
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
		x++;
	return (x);
}

/**
 * new_node - Creates a new node for list
 * @str: string for new node
 *
 * Return: returns the new node or NULL on failure
 *
 */

list_t *new_node(const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	return (new);
}

/**
 * last_node - return the address of the last node in a linked list
 * @head: head of linked list
 *
 * Return: returns last node address
 */
list_t *last_node(list_t **head)
{
	list_t *last = *head;

	while (last->next != NULL)
		last = last->next;
	return (last);
}

/**
 * add_node_end - adds node to the end of the list
 * @head: beginning node of linked list
 * @str: string to be added to node
 *
 * Return: returns the address of the new element, or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last;
	list_t *new;

	if (head == NULL || str == NULL)
		return (NULL);
	new = new_node(str);
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	last = last_node(head);
	last->next = new;
	return (new);
}
