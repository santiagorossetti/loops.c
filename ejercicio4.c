
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int main(int argc, char *argv[]){
        char mp;
        mp = argv[1][0];
        double pr = atof(argv[2]);
        int can = atoi(argv[3]);

        double pt = pr * can;
        double ptf = 0;

        
    

    if (mp == 'e' || mp == 't' || mp == 'c' || mp == 'd'){
//if (argv[1][0] == 'e'){

        if (mp == 'e'){

             ptf = pt - (pt * 15 / 100);


        } else if (mp == 't'){

            ptf = pt - (pt * 10 / 100);

        } else if (mp == 'c'){

            ptf = pt * 1.05;

        } else if (mp == 'd'){
            ptf = pt;

        } 
    printf ("el precio total es %f\n" , ptf);

    
    } else {  
        printf("ingrese un medio de pago disponible");
    }
    
}