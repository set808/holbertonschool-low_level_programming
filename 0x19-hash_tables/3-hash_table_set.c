#include "hash_tables.h"
/**
 * create_hash_node - creates a new hash node
 * @key: the key
 * @value: the value
 *
 * Return: returns a pointer to the new node
 */

hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (NULL);
	}
	new->next = NULL;
	return (new);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table being updated
 * @key: the key. cannot be empty
 * @value: value associated with the key. can be empty
 *
 * Return: returns 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *runner;
	unsigned int index;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		new = create_hash_node(key, value);
		if (new == NULL)
			return (0);
		ht->array[index] = new;
		return (1);
		}
	runner = ht->array[index];
	while (runner)
	{
		if (strcmp(key, runner->key) == 0)
		{
			free(runner->value);
			runner->value = strdup(value);
			return (1);
		}
		runner = runner->next;
	}
	new = create_hash_node(key, value);
	if (new == NULL)
		return (0);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
