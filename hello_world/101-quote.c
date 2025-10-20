#include <stdio.h>
#include <string.h>
 
#define  LENGTH 80
 
int main(void)
{
   FILE *stream = stdout;
   int i, ch;
   char buffer[LENGTH + 1] = "and that piece of art is useful" - Dora Korpar, 2015-10-19";
 
   /* This could be replaced by using the fwrite function */
   for ( i = 0;
        (i < strlen(buffer)) && ((ch = putc(buffer[i], stream)) !=     EOF);
         ++i);
}
 
/********************  Expected output:  **************************
 * and that piece of art is useful" - Dora Korpar, 2015-10-19
*/

