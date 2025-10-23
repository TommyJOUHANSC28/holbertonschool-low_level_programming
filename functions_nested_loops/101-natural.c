#include "main.h"
#include <stdio.h>
/**
* print_times_table - Affiche la table de multiplication de n
* @n: entier entre 0 et 15
*/
void print_times_table(int n)
{
int i, j;
if (n < 0 || n > 15)
return;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int prod = i * j;
if (j == 0)
printf("%d", prod);
else
printf(", %3d", prod);
}
printf("\n");
}
}
