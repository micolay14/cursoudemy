#include <stdio.h>
#include <stdlib.h>

int main()
{
   char cadena1[50],cadena2[50],cadena3[50],cadena4[50];
   printf("introduce la cadena 1\n");
   gets(cadena1);
   printf("introduce la cadena 2\n");
   gets(cadena2);
   printf("introduce la cadena 3\n");
   gets(cadena3);
   printf("introduce la cadena4\n");
   gets(cadena4);

   printf("%s-%s-%s-%s",cadena1,cadena2,cadena3,cadena4);
}
