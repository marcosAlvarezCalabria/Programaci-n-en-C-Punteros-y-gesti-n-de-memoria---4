#include <stdio.h>

void behind(int *, int);

int main(void) {
    int array[10];
    int N, i;
    
    scanf("%d", &N);
    for (i=0; i<N; i++) {
        scanf("%d", &array[i]);
    }
    behind(array, N);
    for (i=0; i<N; i++) {
        //printf("%d", array[i]);
    }
    
    return 0;
}

void behind(int *array, int N)
{
    int index = 0;
    int numBigger;
    numBigger = 0;
    while (index < N){

        if(numBigger < array[index + 1]){
            
           printf("es menor %d", numBigger);
        }

        
        printf("%d", array[index]);
        index++;

    }
    
    printf("est es numbiger %d\n", numBigger);

}