#include "hash_tables.h"

/**
 * key_index - check the code for Holberton School students.
 * @key: pointer to key values
 * @size: unsgined long int indicated the size of array
 * Return: unsigned long int to indicated the index inside the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int index;
int c;

index = 5381;
while ((c = *key++))
{
index = (index * 33) + c;
}
index = index % size;
return (index);
}
