#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, flag;
	hash_node_t *runner;

	if (ht == NULL)
		return;

	i = 0;
	flag = 1;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] == NULL)
		{
			i++;
			continue;
		}
		if (flag == 0)
			printf(", ");
		flag = 0;
		runner = ht->array[i];
		while (runner)
		{
			printf("\'%s\': \'%s\'", runner->key, runner->value);
			if (runner->next != NULL)
				printf(", ");
			runner = runner->next;
		}
		i++;
	}
	printf("}\n");
}
