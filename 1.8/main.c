#include <stdio.h>
#include <math.h>

void main(void)
{
    float RAD, ALT, VOL, ARE;
    printf("ingrese el radio: ");
    scanf("%f", &RAD);
    printf("ingrese la altura del cilindro: ");
    scanf("%f", &ALT);
    VOL = M_PI * pow (RAD, 2) * ALT;
    ARE = 2 * M_PI * RAD * ALT;
    printf("\n El volumen es: %6.2f \t El area es: %6.2f", VOL, ARE);
}
