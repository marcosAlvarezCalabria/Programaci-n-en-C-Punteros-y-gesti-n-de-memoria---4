#include <stdio.h>
int main (void) 
{   
   char text[69][41];
   int index = 0;


    while(index < 69){

        scanf("%s", text[index]);

        index++;
    }
    index = 69;

    while(index >= 0){
        
        /*if(index == 69){
            printf("%s", text[index]);
        }else {
            
        }*/

       printf("%s ", text[ -1]);
        

        index --;
    }
    return 0;
}