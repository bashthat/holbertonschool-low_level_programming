#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: size
 * Return: hash_t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int x = 0;
	hash_table_t *hash_t = NULL;
	hash_node_t **node = NULL;

	node = malloc(sizeof(hash_node_t *) * size);
	if (node == NULL)
		return (NULL);

	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		node[x] = NULL;

	hash_t->size = size;
	hash_t->array = node;

	return (hash_t);
}
