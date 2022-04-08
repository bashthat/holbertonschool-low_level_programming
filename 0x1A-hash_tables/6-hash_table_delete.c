#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_delete - deletes hash table
 * @ht: hash table
 * Return: NULL
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *lint, *tmp;
	unsigned int x = 0;
	
	if (!ht)
	return;
	
	for (; x < ht->size; x++)
		{
		lint = ht->array[x];
		while (lint)
		{
	tmp = lint;
	free(tmp->key);
	free(tmp->value);
	lint = lint->next;
	free(tmp);
		}
	free(lint);
	}
	free(ht->array);
	free(ht);
}
