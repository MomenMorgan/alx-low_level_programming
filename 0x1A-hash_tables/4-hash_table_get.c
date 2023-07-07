#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: hash table to search
 * @key: key to search with
 * Return: value associated with the key
 * or NULL if not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return (NULL);
	if (key == NULL)
		return (NULL);

	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
			temp = temp->next;
		}
		i++;
	}
	return (NULL);
}
