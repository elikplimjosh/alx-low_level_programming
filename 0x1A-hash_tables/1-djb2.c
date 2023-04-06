#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int count;

unsigned long hash = 5381;
const char *ptr = str;

for (; *ptr; ++ptr)
{
	hash = ((hash << 5) + hash) + *ptr; /* hash * 33 + count */
}

return (hash);

}
