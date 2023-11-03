#include "hash_tables.h"
/**
 * hash_table_get - fun
 * @ht: h
 * @key: k
 * Return: hash
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hash;
	unsigned long int i;

	if (!ht || ht->size == 0 || strlen(key) == 0
			|| !key || ht->array == NULL)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	hash = ht->array[i];
	while (hash)
	{
		if (strcmp(hash->key, key) == 0)
			return (hash->value);
		hash = ht->array[i]->next;
	}
	return (NULL);
}
