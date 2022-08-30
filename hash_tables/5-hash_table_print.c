#include "hash_tables.h"

/**
 * hash_table_print - Write a function that prints a hash table.
 * @ht: ht is the hash table
 * Return: nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *tmp = NULL;
	char *space = "";

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			tmp = ht->array[i];
			while (tmp != NULL)
			{
				printf("%s'%s': '%s'", space, tmp->key, tmp->value);
				tmp = tmp->next;
				space = ", ";
			}
		}
		printf("}\n");
	}
}
