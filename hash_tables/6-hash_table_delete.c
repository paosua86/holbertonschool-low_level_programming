#include "hash_tables.h"

/**
 * hash_table_delete - Write a function that deletes a hash table.
 * @ht: ht is the hash table
 * Return: nothing
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *delete;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			while (ht->array[i] != NULL)
			{
				delete = ht->array[i]->next;
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				free(ht->array[i]);
				ht->array[i] = delete;
			}
		}
		free(ht->array);
		ht->array = NULL;
		ht->size = 0;
		free(ht);
	}
}
