#include "hash_tables.h"
/**
 * hash_table_delete - fun
 * @ht: h
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *t;
	unsigned long int i;

	if (!ht || ht->array == NULL || ht->size == 0)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			t = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = t;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
