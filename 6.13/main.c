#include <stdio.h>
const int MES = 12;
const int DEP = 3;
const int AnO = 8;
void Lectura(float[MES][DEP][AnO], int, int, int);
void Funcion1(float[MES][DEP][AnO], int, int, int);
void Funcion2(float[MES][DEP][AnO], int, int, int);
void Funcion3(float[MES][DEP][AnO], int, int, int);
void main(void)
{
    float PRO[MES][DEP][AnO];
    Lectura(PRO, MES, DEP, AnO);
    Funcion1(PRO, MES, DEP, 2);
    Funcion2(PRO, MES, DEP, AnO);
    Funcion3(PRO, MES, DEP, AnO);
}
void Lectura(float A[][DEP][AnO], int F, int C, int P)
{
    int K, I, J;
    for (K = 0; K < P; K++)
        for (I = 0; I < F; I++)
            for (J = 0; J < C; J++)
            {
                printf("ANO: %d\tMes: %d\tDepartamento: %d ", K=1, I+1, J+1);
                scanf("%f", &A[I][J][K]);
            }
}
void Funcion1(float A[][DEP][AnO], int F, int C, int P)
{
    int I, J;
    float SUM=0.0;
    for (I=0; I<F; I++)
            for (J=0; J<C; J++)
                SUM += A[I][J][P-1];
                printf("\n\nVentas totales de la empresa en el segundo ANO: %.2f", SUM);
}
void Funcion2(float A[][DEP][AnO], int F, int C, int P)
{
    int I, J;
    float SUM1=0, SUM2=0, SUM3=0;
    for (I=0; I<F; I++)
        for (J=0; J<C; J++)
            switch (J+1)
            {
            case 1: SUM1 += A[I][J][P-1];
                break;
            case 2: SUM2 += A[I][J][P-1];
                break;
            case 3: SUM3 += A[I][J][P-1];
                break;
            }
            if (SUM1>SUM2)
                if (SUM1>SUM3)
            {
                printf("\n\nDepartamento con mayores ventas en el ultimo ANO: Hilos");
                printf("  Ventos:%.2f", SUM1);
            }
            else
            {
                printf("\n\nDepartamento con mayores ventas en el ultimo ANO: Licra");
                printf("  Ventos:%.2f", SUM3);
            }
            else
                if ("SUM2>SUM3")
            {
                printf("\n\nDepartamento con mayores ventas en el ultimo ANO: Lanas");
                printf("  Ventos:%.2f", SUM2);
            }
            else
            {
                printf("\n\nDepartamento con mayores ventas en el ultimo ANO: Licra");
                printf("  Ventos:%.2f", SUM3);
            }
}
void Funcion3(float A[][DEP][AnO], int F, int C, int P)
{
    int K,I, J, DE, ME, AN;
    float VEN = -1.0;
    for (K=0; K<P; K++)
        for (I=0; I<F; I++)
            for(J=0; J<C; J++)
            if (A[I][J][K]>VEN)
    {
        VEN = A[I][J][K];
        DE = K;
        ME = I;
        AN = K;
    }
    printf("\n\nDepartamento: %d\tMES: %d\TANO: %d", DE+1, ME+1, AN+1);
    printf("\tVentas: %.2f", VEN);
}
