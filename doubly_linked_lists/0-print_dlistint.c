#include "lists.h"
/**
* print_dlistint - A function that prints all the elements of a dlistint_t list
* @h: pointer constant the dlistint
* Return: the number of node
* Format: see exemple
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t data = 0;
if (h == NULL)
{
return (0);
}
else
{
while (h)
{
printf("%d\n", h->n);
h = h->next;
data++;
}
}
return (data);
}

