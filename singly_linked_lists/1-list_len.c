#include "lists.h"
/**
* list_len - a function that returns the number of elements
* @h: pointeur of struture list_t
* Return: the number of elements
*/
size_t list_len(const list_t *h)
{
size_t num = 0;
while (h)
{
num++;
h = h->next;
}
return (num);
}

