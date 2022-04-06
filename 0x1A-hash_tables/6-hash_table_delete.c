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
	unsigned int z = 0;
	hash_node_t *node;

		node = ht->array[z]->next;
		free(ht->array[z]->key);
		free(ht->array[z]->value);
		free(ht->array[z]);
		ht->array[z] = node;
	}
	}
	free(ht->array);
	free(ht);
}
