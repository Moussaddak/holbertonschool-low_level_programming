#include "hash_tables.h"
/**
 * key_index - generate index of a key
 * @size: size of hash table
 * @key: the key
 * Return:  index at which the key/value pair should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_key;

	hash_key = hash_djb2(key) % size;
	return (hash_key);

}
