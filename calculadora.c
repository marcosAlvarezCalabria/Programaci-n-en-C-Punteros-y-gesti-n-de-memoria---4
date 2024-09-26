#include <stdio.h>

int main (void)
{
    int diasTrabajados; 
    int horas;
    int min;
    int index = 0;
    float sumaEnHoras;

printf("Introduce el numero de dias :\n");
scanf("%d", &diasTrabajados);

while(index < diasTrabajados){
    printf("Introduce las horas del dia %d :\n", index);
    scanf("%d", &horas);
    printf("Introduce los min del dia %d\n", index);
    scanf("%d", &min);

    sumaEnHoras = sumaEnHoras + (horas + (float)min / 60);

    index ++;
}

printf("Cantidad de horas totales = %.2f \n", sumaEnHoras);
return 0;

}

