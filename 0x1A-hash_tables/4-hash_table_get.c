#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_get - get the hash table
 * @ht: hash table
 * @key: key
 * Return: NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int filez = 0;
	hash_node_t *the_edge = NULL;
	int x;
	
	if (ht == NULL || key == NULL)
		return (NULL);

	filez = key_index((const unsigned char *)key, ht->size);
	the_edge = ht->array[filez];

	if (the_edge == NULL)
		return (NULL);

	while (strcmp(key, the_edge->key) != 0)
		the_edge = the_edge->next;

	return (the_edge->value);
}
