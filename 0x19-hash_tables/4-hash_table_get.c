#include "hash_tables.h"
/**
 * hash_table_get - retrives the value associated with a key
 * @ht: the hash table
 * @key: the key
 *
 * Return: returns the value associated with the key
 * or NULL if key doesn't exist
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *runner;

	if (ht == NULL || or key == NULL)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);

	runner = ht->array[index];
	while (runner)
	{
		if (strcmp(key, runner->key) == 0)
			return (runner->value);
		runner = runner->next;
	}
	return (NULL);
}
