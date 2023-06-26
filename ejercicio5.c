#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int main(int argc, char *argv[]){
        int n = atoi(argv[1]);
        int i = 0;
        int sum = 0;

        while (i < n){
            sum = sum + i;
            i++;

        }

        printf("la suma de los primeros %d numeros naturales es %d\n" , n , sum); 





    }