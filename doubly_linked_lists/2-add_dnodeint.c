#include "lists.h"
/**
* add_dnodeint - function that adds a new node
* at the beginning of a dlistint_t list
* @head: pointer dlistint_t
* @n: contant n
* Return: the address of the new element or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));
if (!new)
{
return (NULL);
}
else
{
new->n = n;
new->next = *head;
new = *head;
}
return (*head);
}
