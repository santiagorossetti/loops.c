#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char *argv[]){

    int a = atoi(argv[1]);    
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    int max = 0;
    if (a > b && a > c){
        max = a;

    }
    if (b > a && b > c){
        max = b;

    }
    if (c > a && c > b){
        max = c;

    }
    printf("el maximo entre %d , %d y %d es %d\n", a , b , c , max );

}