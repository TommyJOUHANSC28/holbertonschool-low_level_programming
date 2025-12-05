#include "lists.h"
/**
* insert_dnodeint_at_index - a function that inserts a new node.
* @h: pointer head of node
* @idx: a function that inserts a new node at a given position.
* @n: struct interger
* Return: value of the address of the new node
*         or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *newnode = malloc(sizeof(dlistint_t));
dlistint_t *current;
unsigned int count = 0;
if (h == NULL || newnode == NULL)
{
return (add_dnodeint_end(h, n));
}
newnode->n = n;
newnode->next = NULL;
newnode->prev = NULL;
current = *h;
if (idx == 0)
{
newnode = add_dnodeint_end(h, n);
return (newnode);
}
while (current)
{
if (current->next == NULL && count == idx - 1)
{
newnode = add_dnodeint_end(h, n);
return (newnode);
}
else if ((idx - 1) == count)
{
newnode->next = current->next;
newnode->prev = current;
current->next->prev = newnode;
current->next = newnode;
return (newnode);
}
count++;
current = current->next;
}
free(newnode);
return (NULL);
}
