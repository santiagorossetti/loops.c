#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int main(int argc, char *argv[]){

        int i;
        int num;
        int n;
        num = 5;
        i = 1000;
        n = 0;
 
    while (i < 2000){
        printf("%i  " , i);
        i++;
        n++;
        if (n == num)
        {
            printf("\n");
            n = 0;
        }
        

    }

    }