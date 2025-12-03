#include "lists.h"
/**
* delete_dnodeint_at_index - Function that deletes the node at index.
* @head: head of node(noeud)
* @index: index is the index of the node that should be deleted.
* Return: 1 if it succeeded or -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *noeud;
unsigned int counter;
if (*head == NULL)
return (-1);
noeud = *head;
if (index == 0)
{
*head = noeud->next;
if (noeud->next != NULL)
{
noeud->next->prev = NULL;
}
free(noeud);
return (1);
}
for (counter = 0; noeud != NULL && counter < index - 1; counter++)
{
noeud = noeud->next;
}
if (noeud == NULL || noeud->next == NULL)
{
return (-1);
}
if (noeud->next->next != NULL)
{
noeud->next = noeud->next->next;
free(noeud->next->prev);
noeud->next->prev = noeud;
return (1);
}
else
{
free(noeud->next);
noeud->next = NULL;
return (1);
}
return (-1);
}
