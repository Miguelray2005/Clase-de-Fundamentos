#include <stdio.h>

/* Nómina.
El programa, al recibir los salarios de 15 profesores, obtiene el total de la
➥nómina de la universidad.
I: variable de tipo entero.
SAL y NOM: variables de tipo real. */

   void main(void)
{
   int cnt;
   int rep;
   printf("\n Cuantas repeticiones: ");
   scanf("%d", &rep);
   for (cnt = 1; cnt <= 20;cnt++)
   {
   printf("\n %d - %d",cnt,cnt+(cnt-1));
   }

}

