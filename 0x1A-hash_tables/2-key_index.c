#include "hash_tables.h"
/**
 * key_index - fun
 * @key: n
 * @size: s
 * Return: h
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size)
}
