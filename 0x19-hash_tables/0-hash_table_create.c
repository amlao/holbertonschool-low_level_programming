#include "hash_tables.h"

/**
 * *hash_table_create - creates a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	if (size <= 0)
		return (NULL);
	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);
	new_table->array = malloc(size * sizeof(hash_node_t *));
	if (!new_table)
	{
		free(new_table);
		return (NULL);
	}
	new_table->size = size;
	return (new_table);
}
