
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char *argv[])
{

    //int a = atoi(arg);
  //  double b = atof(argc);
  int a;
    a = atoi(argv[1]);
   
    if (a < 0){
        a = a * -1;

    }
    printf ("el valor absoluto de el numero ingresado es %d\n" , a);

}