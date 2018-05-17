#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int count = 0;
	hash_node_t *tmp, *movement;

	if (!ht)
		return;
	for (; count < ht->size;)
	{
		movement = ht->array[count];
		while (tmp)
		{
			tmp = movement->next;
			free(movement->key);
			free(movement->value);
			free(movement);
			movement = tmp;
		}
		count++;
	}
	free(ht->array);
	free(ht);
}
