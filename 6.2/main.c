#include <stdio.h>
const int MAX = 50;
void Lectura(int [] [MAX], int, int);
void Suma(int [][MAX], int[][MAX], int[][MAX], int, int);
void Imprime(int [][MAX], int, int);
void main(void)
{
    int MA[MAX][MAX], MB[MAX][MAX], MC[MAX][MAX];
    int FIL, COL;
    do
    {
        printf("Ingrese el numero de filas de los arreglos: ");
        scanf("%d", &FIL);
    }
    while (FIL>MAX || FIL<1);
    do
    {
        printf("Ingrese el numero de columnas de los arreglos: ");
        scanf("%d", &COL);
    }
    while (COL>MAX || COL<1);
    printf("\n Lectura del arreglo MA\n");
    Lectura(MA, FIL, COL);
    printf("\n Lectura del arreglo MB\n");
    Lectura(MB, FIL, COL);
    Suma(MA, MB, MC, FIL, COL);
    printf("\nImpresion del arreglo MC \n");
    Imprime(MC, FIL, COL);
}
void Lectura(int A[][MAX], int F, int C)
{
    int I, J;
    for (I=0; I<F; I++)
        for (J=0; J<C; J++)
    {
        printf("Ingrese el elemento %d %d: ", I++, J+1);
        scanf("%d", &A[I][J]);
    }
}
void Suma(int M1[][MAX], int M2[][MAX], int M3[][MAX], int F, int C)
{
    int I, J;
    for (I=0; I<F; I++)
        for (J=0; J<C; J++)
        M3[I][J] = M1[I][J] + M2[I][J];
}
void Imprime(int A[][MAX], int F, int C)
{
    int I, J;
    for (I=0; I<F; I++)
        for (J=0; J<C; J++)
        printf("\n Elemento %d %d %d: ", I, J, A[I][J]);
}
