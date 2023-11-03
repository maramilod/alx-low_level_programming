#include "hash_tables.h"
/**
 * hash_table_print - fun
 * @ht: h
 * Return: 0
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *n;
	unsigned long int i;
	int j;

	if (!ht || ht->array == NULL)
		return;
	j = 0;
	printf("{");
	for (i = 0; i < (ht->size) - 1; i++)
	{
		n = ht->array[i];
		while (n != NULL)
		{
			if (j == 1)
				printf(", ");
			printf("'%s': '%s'", n->key,
					n->value);
			j = 1;
			n = n->next;
		}
	}
	printf("}\n");
}
