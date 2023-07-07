#include "hash_tables.h"


/**
* hash_table_create - generates a hash table
* @size: size of the array
* Return: a pointer to newly created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_T = NULL;
	unsigned long int i = 0;

	hash_T = malloc(sizeof(hash_table_t));
	if (hash_T == NULL)
	return (NULL);


	hash_T->size = size;
	hash_T->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_T->array == NULL)
	{
	free(hash_T);
	return (NULL);
	}

	while (i < size)
	{
	hash_T->array[i] = NULL;
	i++;
	}
	return (hash_T);
}
