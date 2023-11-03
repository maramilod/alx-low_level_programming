#include "hash_tables.h"
/**
 * make_n - fun
 * @k: key
 * @v: value
 * Return: n
 */
hash_node_t *make_n(const char *k, const char *v)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);
	node->key = strdup(k);
	if (!(node->key))
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(v);
	if (!(node->value))
	{
		free(node);
		free(node->key);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}
/**
 * hash_table_set - fun
 * @ht: h
 * @key: k
 * @value: v
 * Return: 0 or 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *new, *tmp;
	char *nval;

	if (!ht || !key || strlen(key) == 0 ||
			!value || ht->size == 0 || ht->array == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[i];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			nval = strdup(value);
			if (nval)
				return (0);
			free(tmp->value);
			tmp->value = nval;
			return (1);
		}
		tmp = tmp->next;
	}
	new = make_n(key, value);
	if (!new)
		return (0);
	new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}
