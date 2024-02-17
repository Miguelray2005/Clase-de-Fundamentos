#include <time.h>

#define ARRAY_SIZE 10

int i;
int change;
int n;
int a[ARRAY_SIZE];
int buf;
time_t seed;

int main(int argc, char* argv[])
{
    //inicio generacion de numeros
    seed = 0;
    srand(time(&seed));
    n = sizeof(a) / sizeof(*a);

    for (i = 0; i <= n-1; i++)
    {
        a[i] = rand() % 1000;
    }
    //fin generacion de numeros

    for (i = 0; i <= n-1; i++)
    {
        printf("Element a[%d]: %d\n", i, a[i]);
    }
    /*inicio algoritmo BubleSort*/

    // Variable que indica si ha habido algún cambio en el orden durante un recorrido//
    change = 1;

    // Bucle principal que se ejecuta mientras haya cambios en el orden //
    while (change == 1)

    {   // Inicializar la variable de cambio a 0 al comienzo de cada iteración //
        change = 0;

        // Bucle que recorre la lista de elementos //
        for (i = 0; i <= n-2; i++)

        {   // Comparar elementos adyacentes //
            if (a[i] > a[i+1])

            {   // Intercambiar elementos si están en el orden incorrecto //
                buf = a[i];
                a[i] = a[i+1];
                a[i+1] = buf;

                // Establecer la variable de cambio a 1 para indicar que se realizó un intercambio //
                change = 1;
            }
        }
    }
    /*fin algoritmo*/
    printf("\n-------------------\n");
    for (i = 0; i <= n-1; i++)
    {
        printf("Element a[%d]: %d\n", i, a[i]);
    }
    return 0;
}
