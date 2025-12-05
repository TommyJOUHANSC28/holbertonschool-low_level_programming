#include "lists.h"
/**
* free_list - a function that frees a list_t list,
* @head: pointer to the first node of the list
* Return: value of free list
*/
void free_list(list_t *head)
{
list_t *tempo;
while (head != NULL)
{
tempo = head->next;
free(head->str);
free(head);
head = tempo;
}
}
