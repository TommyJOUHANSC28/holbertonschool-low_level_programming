#include "main.h"
#include <stdio.h>
#include <time.h>
/**
* jack_bauer - Affiche toutes les minutes de la journée (00:00 à 23:59)
*/
void jack_bauer(void)
{
int h, m;
for (h = 0; h < 24; h++)
{
for (m = 0; m < 60; m++)
{
_putchar('0' + h / 10);
_putchar('0' + h % 10);
_putchar(':');
_putchar('0' + m / 10);
_putchar('0' + m % 10);
_putchar('\n');
}
}
}
