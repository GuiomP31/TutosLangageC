#include <stdio.h>
#include <stdlib.h>
/* 
  
 */



int main(int argc, char **argv)
{
    float Moyenne(int,int);
    int a;
    int b;
    float moye;

    printf("Veuillez rentrer un premier nombre : \n");
    scanf("%d", &a);

    printf("Veuillez rentrer un second nombre : \n");
    scanf("%d", &b);

    moye = Moyenne(a, b);
    printf("La moyenne vaut : %f\n", moye);

    return 0;
}

float Moyenne(int nbr1, int nbr2) // En tete de la fonction
{
    float result; // Corps de la fonction

    result = (nbr1 + nbr2) / 2.;
    return result;
}