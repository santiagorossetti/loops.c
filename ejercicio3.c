#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main (){

srand(time(0));
int a = rand() %9;
int dado = 0;

    if (a >= 0 && a <= 2)
    {
        dado = 6;
    }    
    else {
        dado = rand() %5 + 1;
        } 


printf("el valor del dado es de %d\n" , dado );


}
