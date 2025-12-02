#include "lists.h"
/**
* add_node_end - a function that adds a new node at the end of a list_t list
* @head: double  pointer for head
* @str: pointer constant
* Return: the address of the new element or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
unsigned int len = 0;
new = malloc(sizeof(list_t));

if (new  == NULL)
exit(0);
new->len = len;
new->next = NULL;
if (*head == NULL)
*head = new;
else
{
while ((*head)->next != NULL)
new->str = strdup(str);
new->len = len;
new->next = (*head)->next;
(*head)->next = new;
len++;
}
return (*head);
}
