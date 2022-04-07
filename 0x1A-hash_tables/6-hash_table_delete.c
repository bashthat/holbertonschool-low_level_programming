#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - function frees
 * @head: this is the hash_node_t list
 */
void free_list(hash_node_t *head)
{
	hash_node_t *lint;
	while (lint)
	
	{
	lint = head->next;
	free(lint->key);
	free(lint->value);
	free(lint);
	head = lint;
	}
}
/**
 * hash_table_delete - deletes hash table
 * @ht: hash table
 * Return: NULL
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int x = 0;
	
	if (!ht)
	return;
	
	for (; x < ht->size; x++)
	
	free_list(ht->array[x]);
	free(ht->array);
	free(ht);
}
