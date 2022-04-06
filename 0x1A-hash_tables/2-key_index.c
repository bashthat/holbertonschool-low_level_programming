#include "hash_tables.h"
/**
 * key_index - computes the key given to the hash_table.
 * @key: what key is given to the table?
 * @size: size of the array of the hash table.
 * Return: hash_djb2(key) function % size.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
