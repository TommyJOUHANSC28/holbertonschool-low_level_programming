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
list_t *temp;
void (temp);
new = malloc(sizeof(list_t));
if (new  == NULL)
exit(0);
new->str = strdup(str);
new->len = len;
new->next = NULL;
temp = *head;
if (*head == NULL)
*head = new;
else
{
while (temp->next != NULL)
temp->next = new;
}
return (*head);
}
