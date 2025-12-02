#include "lists.h"
/**
* free_dlistint - a  a function that frees a dlistint_t list
* @head: pointer of struct dlistint_t
* Return: value of void
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *listfree;
while (head)
{
listfree = head;
head = head->next;
free(listfree);
}
}
