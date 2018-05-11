#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int count = 0;
	hash_node_t *tmp;
	int flag = 0;

	if (!ht)
		return;
	printf("{");
	for (; count < ht->size; count++)
	{
		tmp = ht->array[count];
		while (tmp)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			flag = 1;
		}
	}
	printf("}\n");
}
