#include "hash_tables.h"

/**
 * key_index - findes the index of key-value
 * @key: key (string)
 * @size: size of array of hash table
 * Return: index at where the key-value stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
