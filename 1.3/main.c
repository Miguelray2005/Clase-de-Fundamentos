#include <stdio.h>
#include <stdlib.h>


int main(void) {
  int Cla,S1,S2,S3,S4,S5,S6;
  float ing_sem = 0,pro_m = 0;


  printf("Ingrese su contraseña: ");
  scanf("%d", &Cla);

  printf("Ingrese su 1er sueldo: ");
  scanf("%d", &S1);
  printf("Ingrese su 2do sueldo: ");
  scanf("%d", &S2);
  printf("Ingrese su 3ro sueldo: ");
  scanf("%d", &S3);
  printf("Ingrese su 4to sueldo: ");
  scanf("%d", &S4);
  printf("Ingrese su 5to sueldo: ");
  scanf("%d", &S5);
  printf("Ingrese su 6to sueldo: ");
  scanf("%d", &S6);

ing_sem = S1 + S2 + S3 + S4 + S5 + S6;
  pro_m = ing_sem / 6;

  printf("Clave del empleado: %d\n", Cla);

    printf("Ing_sem: %.2f\n", ing_sem);
    printf("Promedio mensual: %.2f\n", pro_m);
}
