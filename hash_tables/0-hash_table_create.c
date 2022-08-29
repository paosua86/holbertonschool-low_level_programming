#include "hash_tables.h"

/**
 * hash_table_create - Write a function that creates a hash table.
 * @size: is the size of the array
 * Return: a pointer to the newly created hash table
*/


hash_table_t *hash_table_create(unsigned long int size);
{
	hash_table_t *table;
	hash_node_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t));
	if (array == NULL)
	{
		free(table);
		return (NULL);
	}
	table->size = size;
	table->array = array;
	return (table);
}
