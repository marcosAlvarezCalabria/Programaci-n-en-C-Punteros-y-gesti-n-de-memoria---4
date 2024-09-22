/*Descripción:
Tienes un array de enteros con valores positivos y negativos. Debes escribir un programa que:

Utilice un puntero para recorrer el array.
Reemplace todos los valores negativos del array con el número 0, usando únicamente aritmética de punteros (es decir, no puedes usar índices de array como array[i]).
Imprima el array modificado usando el puntero.*/
#include <stdio.h>

int main (void)
{
    int arr[] = {1, 2, -5, 6};
    int *arrPtr;
    int index = 0;


    arrPtr = arr;
    
    while(index > 0){
        if(*arrPtr  < 0){
            *arrPtr = 0;
        }

        arrPtr++;
        index++;
        printf("%d \n", *arrPtr);
    }


    
    return 0;
}
    