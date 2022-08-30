#include "hash_tables.h"

/**
 * hash_table_set - Write a function that adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key. value must be duplicated.
 * value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL;
	hash_node_t *hash;
	unsigned long int i;

	if (key == NULL || ht == NULL)
		return (0);
	i = key_index((unsigned char *)key, ht->size);
	hash = ht->array[i];
	while (hash != NULL)
	{
		if (strcmp(hash->key, key) == 0)
		{
			free(hash->value);
			hash->value = strdup(value);
			return (1);
		}
		hash = hash->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[i];
	ht->array[i] = node;
	return (1);
return (1);
}
