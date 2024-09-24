#include <stdio.h>

void behind(int*, int);

int main(void) {
    int array[10];
    int N, i;

    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }
    behind(array, N);
    for (i = 0; i < N; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}

/* Write your function behind() here: */


void behind(int* array, int N)
{
    int index = 0;
    int numBigger;
    //int positionNumBigger;
    numBigger = 0;
    while (index < N) {


        if (array[index] > numBigger) {
            numBigger = array[index];
            //positionNumBigger = index;
        }
        index++;
    }
    index = 0;
    while (index < N) {
        array[index] = numBigger - (array[index]);

        //printf(" %d\n", array[index]); 

        index++;
    }



}