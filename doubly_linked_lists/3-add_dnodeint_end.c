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
dlistint_t *new, *tempo;
new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
new->prev = NULL;
*head = new;
return (new);
}
tempo = *head;
while (tempo->next)
tempo = tempo->next;
tempo->next = new;
new->prev = tempo;
return (new);
}
