#include "lists.h"
/**
* sum_dlistint - a function that returns the sum of all the data (n)
* @head: pointer Head of node (dlistint_t)
* Return: value of the sum of all data or 0 if empty
*/
int sum_dlistint(dlistint_t *head)
{
unsigned int sumdata = 0;
if (sumdata)
{
return (0);
}
while (head != NULL)
{
sumdata += head->n;
head = head->next;
}
return (sumdata);
}
