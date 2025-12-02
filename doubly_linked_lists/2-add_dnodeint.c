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
dlistint_t *tempo, *newnode = malloc(sizeof(dlistint_t));
if (newnode == NULL)
return (NULL);
newnode->n = n;
newnode->prev = NULL;
newnode->next = NULL;
if (*head == NULL)
{
newnode->next = NULL;
*head = newnode;
return (*head);
}
tempo = *head;
newnode->next = tempo;
tempo->prev = newnode;
*head = newnode;
return (newnode);
}
