#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * @hash_table_delete - deletes hash table
 * @ht: hash table
 * Return: NULL
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int z;
	hash_node_t *node;
	hash_node_t *lint;

	if (ht == NULL)
	return;

	for (z = 0; z < ht->size; z++)
	{
		node = ht->array[z];
		if (node != NULL && node->next == NULL)
		{
		
		free(node->key);
		free(node->value);
		free(node);
		}

		else if (node != NULL && node->next != NULL)
	{
		while (node != NULL)
		{

		lint = node->next;
		free(node->key);
		free(node->value);
		free(node);
		node = lint;
		}
	free(node);
	}
	}
	free(ht->array);
	free(ht);
}
