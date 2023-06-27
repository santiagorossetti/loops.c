#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int main(int argc, char *argv[]){

        int n;
        n = atoi(argv[1]);

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
            
            printf("%c " , i+j%2==0 ? '*' : ' ');

            }
        printf("\n");

        }

    }