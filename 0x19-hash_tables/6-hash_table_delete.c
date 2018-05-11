#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int count = 0;
	hash_node_t *tmp;

	if (!ht)
		return;
	for (; count < ht->size; count++)
	{
		tmp = ht->array[count];
		while (tmp)
		{
			/* move through the nodes and delete */
		}
	}
	free(ht->array);
	free(ht);
}
