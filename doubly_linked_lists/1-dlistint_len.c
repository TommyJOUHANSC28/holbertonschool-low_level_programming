#include "lists.h"
/**
* dlistint_len - function that returns the number
* of elements in a linked dlistint_t list
* @h: pointer head of constant the dlistint
* Return: the number of node
*/
size_t dlistint_len(const dlistint_t *h)
{
unsigned int nodeCount = 0;
const dlistint_t *lister;
lister = malloc(sizeof(dlistint_t));
lister = h;
if (lister == NULL)
{
return (0);
}
while (lister)
{
lister = lister->next;
nodeCount++;
}
return (nodeCount);
}
