/*Descripción:
Tienes un array de enteros con valores positivos y negativos. Debes escribir un programa que:

Utilice un puntero para recorrer el array.
Reemplace todos los valores negativos del array con el número 0, usando únicamente aritmética de punteros (es decir, no puedes usar índices de array como array[i]).
Imprima el array modificado usando el puntero.*/

#include <stdio.h>

int main(void) {
    int arr[] = { 1, 2, -5, 6 };
    int* ptrArr = arr;
    int size = sizeof(arr) / sizeof(arr[0]); // Calcular el tamaño del array
    int i = 0; // Contador para controlar el número de elementos

    while (i < size) {
        if (*(ptrArr) < 0) {
            *(ptrArr) = 0;
        }

        printf("%d ", *(ptrArr)); // Imprimir el valor del elemento actual

        ptrArr++; // Avanzar al siguiente elemento
        i++; // Incrementar el contador
    }

    return 0;
}
