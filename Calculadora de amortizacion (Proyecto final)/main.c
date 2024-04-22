#include <stdio.h> //Estas son las librerias que permiten realizar las operaciones de entrada y salida, ademas de funciones//
#include <math.h>

void calcularAmortizacion(float prestamo, float interes, int plazo)
//Esta funci�n calcula la tabla de amortizaci�n para el pr�stamo dado, tomando los parametros: prestamo,interes,plazo//
{
    FILE *archivo;
    archivo = fopen("tabla_amortizacion.txt", "w"); //Fopen es una funcion para abrir el archivo txt//

    float saldo = prestamo; // Variable que almacena el prestamo//
    float interesMensual = interes / 100 / 12; // Variable almacena los intereses//
    float pagoMensual = (prestamo * interesMensual) / (1 - pow(1 + interesMensual, -plazo)); //Variable que guarda el monto del pago mensual que el prestatario debe realizar. Junto con la f�rmula para el pago mensual de un pr�stamo//

    fprintf(archivo, "Mes\t\tSaldo\t\tPago\t\tInteres\t\tPrincipal\t\n");
    printf("Mes\t\tSaldo\t\tPago\t\tInteres\t\tPrincipal\t\n");

    for (int i = 1; i <= plazo; i++)

    {
        float interesPagado = saldo * interesMensual;
        float principalPagado = pagoMensual - interesPagado;

        fprintf(archivo, "%d\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\n", i, saldo, pagoMensual, interesPagado, principalPagado);
        //Escribe la misma informaci�n de la tabla de amortizaci�n en el archivo "tabla_amortizacion.txt"//

        printf("%d\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\n", i, saldo, pagoMensual, interesPagado, principalPagado);
        //Imprime la tabla de amortizaci�n en la consola mostrando el mes, saldo restante, pago mensual, inter�s pagado y principal pagado//

        saldo -= principalPagado; // Se utiliza para actualizar el saldo restante del pr�stamo despu�s de cada pago mensual//
    }

    fclose(archivo); //Cierra el archivo despu�s de escribir toda la tabla de amortizaci�n en �l//
}

int main() //Funci�n principal//
{
    float prestamo, interes;
    int plazo;

    //Solicita al usuario que ingrese el monto del pr�stamo, la tasa de inter�s anual y el plazo del pr�stamo en meses//
    printf("Ingrese el monto del prestamo: ");
    scanf("%f", &prestamo);

    printf("Ingrese la tasa de interes (porcentaje anual): ");
    scanf("%f", &interes);

    printf("Ingrese el plazo del prestamo en meses: ");
    scanf("%d", &plazo);

    calcularAmortizacion(prestamo, interes, plazo);
    //Llama a la funci�n calcularAmortizacion con los valores ingresados por el usuario//

    return 0;
}
