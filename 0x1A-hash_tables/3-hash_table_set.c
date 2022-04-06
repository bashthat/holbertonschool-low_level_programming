#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_set - adds to the table
 * @key: key value
 * @ht: hash_table status
 * @value: key value
 * Return: one success, zero unsuccessful.
 */


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long indx;
	unsigned long sz;
	hash_node_t *vim = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	vim = malloc(sizeof(hash_node_t));

	if (vim == NULL)
	return (0);

	sz = ht->size;
	indx = key_index((const unsigned char *)key, sz);

	vim->key = strdup(key);
	vim->value = strdup(value);
	vim->next = ht->array[indx];
	ht->array[indx] = vim;

	return (1);

}
