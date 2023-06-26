#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int main(int argc, char *argv[]){
        int n = atoi(argv[1]);
        int i = 0;
        int num = 0;
 
        while (i < n){
             num = i * i;
            
            printf("%d            %d\n" , i , num);
            i++;
        }


    }
