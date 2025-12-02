 #include "lists.h"
/**
* get_dnodeint_at_index - Returns the nth node of a doubly linked list
* @head: Pointer to the head of the list
* @index: Index of the node to retrieve (starting from 0)
*
* Return: Pointer to the node at the given index,
*         or NULL if the node does not exist.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int counter = 0;
if (head == NULL)
{
return (NULL);
}
while (head != NULL)
{
if (index == counter)
{
return (head);
}
counter++;
head = head->next;
}
return (NULL);
}
