#include "hash_tables.h"
/**
 * key_index - function that returns the index of k, v pair
 * @key: key of the hash table
 * @size: size of the hash table
 * Return: index of k, v pair
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
