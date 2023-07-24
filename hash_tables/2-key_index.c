#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: key to find index of
 * @size: size of the array of the hash table
 *
 * Return: index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int index = 0;

    if (key == NULL || size == 0)
        return (0);

    index = hash_djb2(key) % size;

    return (index);
}