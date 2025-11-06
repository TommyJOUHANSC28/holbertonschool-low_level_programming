#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
* generate_key - generates a key of KEY_LEN characters
* @buf: buffer (size KEY_LEN + 1) where the key will be written
*
* This implementation produces a string of KEY_LEN letters
* lowercase ('a' - 'z') by initializing the random number generator
* with time(NULL).
* Note: if 101-crackme uses a specific algorithm,
* replace the body of this function with the inverse logic
* found via gdb/objdump.
*/
void generate_key(char *buf)
{
int i;
srand((unsigned int)time(NULL));
for (i = 0; i < KEY_LEN; i++)
{
buf[i] = (char)('a' + (rand() % 26));
}
buf[KEY_LEN] = '\0';
}
/**
* main - program entry point
*
* Displays a key on stdout.
*
* Return: 0 on succes.
*/
int main(void)
{
char key[KEY_LEN + 1];
generate_key(key);
printf("%s\n", key);
return (0);
}
