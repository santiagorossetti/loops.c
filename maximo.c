#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int maximo (int a, int b){

    int maxA = a > b ? a : b;
    return maxA;


}


int main (int argc , char *argv[]){

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    int d = atoi(argv[4]);


   int max = maximo(a , b) > maximo(c , d) ? maximo(a , b) : maximo(c , d);
   
    printf("el maximo entre los numeros ingresados es %d" , max);

}