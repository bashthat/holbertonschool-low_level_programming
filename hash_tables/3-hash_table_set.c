#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add element to
 * @key: key of the element
 * @value: value of the element
 *
 * Return: 1 if successful, 0 if not
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int slot = key_index((const unsigned char *)key, sizeof ht->size);
    hash_node_t *new_node = malloc(sizeof(hash_node_t));
    hash_node_t *temp = ht->array[slot];

    if (ht == NULL || key == NULL || value == NULL)
        return (0);

    if (new_node == NULL)
        return (0);

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = NULL;

    if (ht->array[slot] == NULL)
    {
        ht->array[slot] = new_node;
        return (1);
    }

    while (temp != NULL)
    {
        if (strcmp(temp->key, key) == 0)
        {
            free(temp->value);
            temp->value = strdup(value);
            return (1);
        }
        temp = temp->next;
    }

    new_node->next = ht->array[slot];
    ht->array[slot] = new_node;

    return (1);

}
