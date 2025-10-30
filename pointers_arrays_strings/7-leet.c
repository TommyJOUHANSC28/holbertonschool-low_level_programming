#include "main.h"
/**
* leet - A function that encodes a string into 1337
* @s: An input string to encodee
* Return: An encode string
*/
char *leet(char *s)
{
int i = 0, j;
char subs[10] = "4433007711";
char src[10] = "aAeEoOtTlL";
while (s[i])
{
for (j = 0; j < 10; j++)
if (s[i] == src[j])
s[i] = subs[j];
i++;
}
return (s);
}
