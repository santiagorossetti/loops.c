#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int vector (int x1 , int x2 , int y1 , int y2){

    int vec1;
    int vec2;
    vec1 = x1 + y1;
    vec2 = x2 + y2;

    return vec1 + vec2;
}


int main (int argc , char *argv[]){

    int x1 = atoi(argv[1]);
    int x2 = atoi(argv[2]);
    int y1 = atoi(argv[3]);
    int y2 = atoi(argv[4]);

    int res = vector (x1 , x2 , y1 , y2);

    printf("la suma entre los dos vectores es %d\n" , res);

}