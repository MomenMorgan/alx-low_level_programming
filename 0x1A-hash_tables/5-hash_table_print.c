#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	unsigned long int j = 0;
	hash_node_t *check = NULL;
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return;


	j = (ht->size) - 1;

	while (j != 0)
	{
		check = ht->array[j];
		if (check != NULL)
			break;
		j--;
	}


	printf("{");
	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			if (temp != check)
				printf(", ");
			temp = temp->next;
		}
		i++;
	}
	printf("}");
	printf("\n");
}
