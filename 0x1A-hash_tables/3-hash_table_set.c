#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table you want to add or update.
 * @key: first argument
 * @value: second argument
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_node = NULL;
	hash_node_t **ptr2_to_hash_node = NULL;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	ptr2_to_hash_node = (ht->array);
	ptr2_to_hash_node += index;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}

	if ((*ptr2_to_hash_node) == NULL)
	{
		*ptr2_to_hash_node = new_node;
		new_node->next = NULL;
	}
	else
	{
		(*ptr2_to_hash_node)->next = NULL;
		*ptr2_to_hash_node = new_node;
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	return (1);
}
