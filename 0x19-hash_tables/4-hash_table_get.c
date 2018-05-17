#include "hash_tables.h"

/**
 * *hash_table_get - retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int count;

	if (!ht || !strlen(key) || ht->size == 0)
		return (NULL);
	count = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[count];
	for (; tmp;)
	{
		if (strcmp(key, tmp->key) == 0)
			return (tmp->value);
		temp = temp->next;
	}
	return (NULL);
}
