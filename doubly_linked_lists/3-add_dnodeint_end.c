#include "lists.h"
/**
* dlistint_t *add_dnodeint_end - A function that adds a new node at the end
* of a dlistint_t list
* @head: double pointer of dlistint_t
* @n: constant interger
* Return: the adresse of the new element or NULL
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newlist = NULL, *theend = *head;
newlist = malloc(sizeof(dlistint_t));
if (newlist == NULL)
return (NULL);
newlist->n = n;
newlist->prev = NULL;
newlist->next = NULL;
if (*head == NULL)
{
*head = newlist;
return (*head);
}
while (theend->next != NULL)
{
theend = theend->next;
}
newlist->prev = theend;
theend->next = newlist;
return (newlist);
}
