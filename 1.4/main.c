#include<stdio.h>
int main(void){

float b,h,a;

  printf("Ingrese la base del triangulo: ");
  scanf("%f", &b);
  printf("Ingrese la altura del triangulo: ");
  scanf("%f", &h);

  a = ((b * h) / 2);

  printf("Esta es la superficie: %.2f", a);

  return 0;
}
