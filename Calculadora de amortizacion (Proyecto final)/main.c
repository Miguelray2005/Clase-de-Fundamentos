#include <stdio.h> //Estas son las librerias que permiten realizar las operaciones de entrada y salida, ademas de funciones//
#include <math.h>

void calcularAmortizacion(float prestamo, float interes, int plazo)
//Esta función calcula la tabla de amortización para el préstamo dado, tomando los parametros: prestamo,interes,plazo//
{
    FILE *archivo;
    archivo = fopen("tabla_amortizacion.txt", "w"); //Fopen es una funcion para abrir el archivo txt//

    float saldo = prestamo; // Variable que almacena el prestamo//
    float interesMensual = interes / 100 / 12; // Variable almacena los intereses//
    float pagoMensual = (prestamo * interesMensual) / (1 - pow(1 + interesMensual, -plazo)); //Variable que guarda el monto del pago mensual que el prestatario debe realizar. Junto con la fórmula para el pago mensual de un préstamo//

    fprintf(archivo, "Mes\t\tSaldo\t\tPago\t\tInteres\t\tPrincipal\t\n");
    printf("Mes\t\tSaldo\t\tPago\t\tInteres\t\tPrincipal\t\n");

    for (int i = 1; i <= plazo; i++)

    {
        float interesPagado = saldo * interesMensual;
        float principalPagado = pagoMensual - interesPagado;

        fprintf(archivo, "%d\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\n", i, saldo, pagoMensual, interesPagado, principalPagado);
        //Escribe la misma información de la tabla de amortización en el archivo "tabla_amortizacion.txt"//

        printf("%d\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\n", i, saldo, pagoMensual, interesPagado, principalPagado);
        //Imprime la tabla de amortización en la consola mostrando el mes, saldo restante, pago mensual, interés pagado y principal pagado//

        saldo -= principalPagado; // Se utiliza para actualizar el saldo restante del préstamo después de cada pago mensual//
    }

    fclose(archivo); //Cierra el archivo después de escribir toda la tabla de amortización en él//
}

int main() //Función principal//
{
    float prestamo, interes;
    int plazo;

    //Solicita al usuario que ingrese el monto del préstamo, la tasa de interés anual y el plazo del préstamo en meses//
    printf("Ingrese el monto del prestamo: ");
    scanf("%f", &prestamo);

    printf("Ingrese la tasa de interes (porcentaje anual): ");
    scanf("%f", &interes);

    printf("Ingrese el plazo del prestamo en meses: ");
    scanf("%d", &plazo);

    calcularAmortizacion(prestamo, interes, plazo);
    //Llama a la función calcularAmortizacion con los valores ingresados por el usuario//

    return 0;
}
