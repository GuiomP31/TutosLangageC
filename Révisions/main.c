#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char ** argv ){
    void equa2 (float, float, float, float, float*, float*);
    
    float a ,b, c, d;
    float x1, x2;
 printf ( "Rentrer a ");
 scanf ( "%f", &a);
 printf ( "Rentrer b ");
 scanf ( "%f", &b);
 printf ( "Rentrer c ");
 scanf ( "%f", &c);
// Calcul de D
    d = b*b-4*a*c;
    if (d < 0)
printf (" Pas de solution \n");
    else if ( d == 0)
printf (" Une racine double : %f\n", -b/2/a);
    else {
        equa2 (a, b, c, d, &x1, &x2);

printf ("Solution 1 :%f\n",x1);
printf ("Solution 2 :%f\n",x2 );
    }

}
    void equa2 (float x, float y, float z, float del, float *sol1, float *sol2){

        * sol1 = (-y+sqrt(del))/2/x;
        * sol2 = (-y-sqrt(del))/2/x;
}

    




