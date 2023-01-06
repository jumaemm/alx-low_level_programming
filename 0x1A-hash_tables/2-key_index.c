#include "hash_tables.h"

/**
 * key_index - gives index of a key
 * @key: key itself
 * @size: size of the array of the hash table
 * Return: index to store the key/value pair
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
