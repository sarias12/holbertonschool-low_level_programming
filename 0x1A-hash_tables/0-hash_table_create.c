#include "hash_tables.h"
/**
 * hash_table_create - unction that creates a hash table.
 *
 * @size:  the size of the array
 *
 * Return: New Hash Table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;
	hash_node_t **new_array;
	unsigned long int i;

	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
	{
		return (NULL);
	}

	new_array = malloc(sizeof(hash_node_t *) * size);
	if (new_array == NULL)
	{
		free(new_hash_table);
		return (NULL);
	}
	new_hash_table->array = new_array;
	new_hash_table->size = size;
	for (i = 0; i < size ; i++)
	{
		new_array[i] = NULL;
	}
	return (new_hash_table);
}
