#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_print - prints table
 * @ht: hash tabla
 * Return: null
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *index;
	unsigned long int i;
	int j;

	if (!ht)
	return;
	
	printf("{");
	
	for (i = 0; i <= ht->size; i++)
	{
	
	index = ht->array[i];
	for (j = 0; index != NULL; index = index->next, j++)
	{
	if (j == 0)
	printf(", ");
	printf("%s': '%s'", index->key, index->value);
	
	j = 1;
	
	}
	}
	printf("}\n");
}
