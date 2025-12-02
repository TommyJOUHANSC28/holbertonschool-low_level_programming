#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
* add_node_end - a function that adds a new node at the end of a list_t list
* @head: double  pointer for head
* @str: pointer constant
* Return: the address of the new element or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *lister, *endnode;
endnode = malloc(sizeof(list_t));
if (endnode  == NULL)
return (NULL);
endnode->str = strdup(str);
if (endnode->str == NULL)
{
free(endnode);
return (NULL);
}
endnode->len = _strlen(str);
endnode->next = NULL;
if (*head == NULL)
{
*head = endnode;
return (endnode);
}
lister = *head;
while (lister->next)
lister = lister->next;
lister->next = endnode;
return (endnode);
}
/**
* _strlen - Calculates the length of a string
* @s: Pointer to the string
*
* Return: Length of the string (int)
*/
int _strlen(const char *str)
{
unsigned int lenght = 0;
while (str[lenght] != '\0')
lenght++;
return (lenght);
}
