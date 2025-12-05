#include "hash_tables.h"
/**
* hash_table_set - Function that adds an element to the hash table.
* @ht: pointee hash table
* @key: string the key
* @value: the value associated with the key
* Return: 1 if it succeeded or 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *node, *tmp;
if (ht == NULL || key == NULL || *key == '\0')
return (0);
index = key_index((const unsigned char *)key, ht->size);
tmp = ht->array[index];
while (tmp != NULL)
{
if (strcmp(tmp->key, key) == 0)
{
free(tmp->value);
tmp->value = strdup(value);
return (tmp->value != NULL);
}
tmp = tmp->next;
}
node = malloc(sizeof(hash_node_t));
if (node == NULL)
return (0);
node->key = strdup(key);
node->value = strdup(value);
if (node->key == NULL || node->value == NULL)
{
free(node->key);
free(node->value);
free(node);
return (0);
}
node->next = ht->array[index];
ht->array[index] = node;
return (1);
}
