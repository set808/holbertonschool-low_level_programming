#include "hash_tables.h"
/**
 * key_index - give you the index of a key
 * @key: the key
 * @size: the size of the hash table array
 *
 * Return: returns the index of where the key is stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return hash_djb2((unsigned char *)key) % size;
}
