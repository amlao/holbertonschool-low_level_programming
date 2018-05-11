#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to ass or update the key/value to
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int count;
	hash_node_t *new, *temp;

	count = key_index((unsigned char *)key, ht->size);
	temp = ht->array[count];
	new = malloc(sizeof(hash_node_t *));
	if (!new || !key || !value)
		return (0);

	for (; temp; temp = temp->next)
	{
		if (strcmp(temp->key, key) == 0)
		{
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			else
				return (1);
		}
	}
	new->key = strdup(key);
	new->value = strdup(value);
	if (ht->array[count] == NULL)
	{
		ht->array[count] = new;
		return (1);
	}
	new->next = temp;
	ht->array[count] = new;

	return (1);
}
