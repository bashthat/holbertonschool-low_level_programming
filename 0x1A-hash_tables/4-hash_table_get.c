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
	unsigned long int filez;
	hash_node_t *the_edge = NULL;

	if (!ht || !key)
	return (NULL);
	
	filez = key_index((unsigned char *)key, ht->size);
	the_edge = ht->array[filez];
	
	while (the_edge)
	{
		if (strcmp(the_edge->key, key) == 0)
		{
			return (the_edge->value);
		}
	the_edge = the_edge->next;
	}

	return (NULL);
}
