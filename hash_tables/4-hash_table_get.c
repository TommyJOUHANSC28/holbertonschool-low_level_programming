#include "hash_tables.h"
/**
* hash_table_get - A function that retrieves a value associated with a key
* @ht: pointer is the hash table you want to look into
* @key: the key
* Return: the value associated with the element
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *node;
unsigned long int index;
if (ht == NULL || key == NULL || *key == '\0')
return (NULL);
index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];
while (node != NULL)
{
if (strcmp(node->key, key) == 0)
return (node->value);
node = node->next;
}
return (NULL);
}
