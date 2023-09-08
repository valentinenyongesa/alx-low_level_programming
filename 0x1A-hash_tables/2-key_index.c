#include "hash_tables.h"

/**
 * key_index - Gives index of a key
 * @key: key
 * @size: size of array of hash tables
 * Return: index key/value pair should be stored in array of hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
