#include <stdio.h>
#include <stdlib.h>
/*
  
  */
 int main (int argc, char ** argv) {
    
 int largeur ;
 int longueur ;
 int surface ;
	
 printf ("Largeur : ") ;
 scanf("%d",&largeur) ;
	
 printf("Longueur : ");
 scanf("%d",&longueur);
	
	surface = largeur * longueur ;
	printf("%d",surface) ;
	
 return EXIT_SUCCESS ;
}
