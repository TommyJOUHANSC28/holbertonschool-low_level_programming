#include "lists.h"
/**
* dlistint_len - function that returns the number
* of elements in a linked dlistint_t list
* @h: pointer constant the dlistint
* Return: the number of node
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t nodeCount = 0;
if (h != NULL)
{
return (-1);
}
else
{
nodeCount++;
h = h->next;
}
return (nodeCount);
}
