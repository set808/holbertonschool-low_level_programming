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

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	return (new);
}

/**
 * add_node - adds node to the beginning of the list
 * @head: beginning node of linked list
 * @str: string to be added to node
 *
 * Return: returns the address of the new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL || str == NULL)
		return (NULL);
	new = new_node(str);
	if (new == NULL)
		return (NULL);
	new->next = *head;
	*head = new;
	return (*head);
}
