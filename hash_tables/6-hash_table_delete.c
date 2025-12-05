#include "hash_tables.h"
/**
* hash_table_delete -  a function that deletes a hash table.
* @ht: the hash table
*
* Return: value after delete table
*/
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *node, *tmp;
unsigned long int index;
if (ht == NULL)
return;
for (index = 0; index < ht->size; index++)
{
node = ht->array[index];
while (node != NULL)
{
tmp = node->next;
free(node->key);
free(node->value);
free(node);
node = tmp;
}
}
free(ht->array);
free(ht);
}
