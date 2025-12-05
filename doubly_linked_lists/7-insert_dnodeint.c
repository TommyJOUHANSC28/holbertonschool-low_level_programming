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
dlistint_t *newnode, *current;
unsigned int count = 0;
if (h == NULL)
return (NULL);
newnode = malloc(sizeof(dlistint_t));
if (newnode == NULL)
return (NULL);
newnode->n = n;
newnode->next = NULL;
newnode->prev = NULL;
current = *h;
if (idx == 0)
{
newnode->next = *h;
if (*h != NULL)
(*h)->prev = newnode;
*h = newnode;
return (newnode);
}
while (current != NULL)
{
if (count == idx - 1)
{
newnode->next = current->next;
newnode->prev = current;
if (current->next != NULL)
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

