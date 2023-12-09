#include <stdio.h>
#include <stdlib.h>
/* 
  Affiche Bonjour suivi du nom fourni 
	Affiche Bonjour si aucun nom fourni
	Affiche usage si trop de noms
 */
int main (int argc,char**argv){
    
if (argc>2) {
    //On a trop d'arguments
    //Affiche message d'erreur
    printf("usage: hi<nom>\n");
    printf("Ex: hi Vincent affichera Bonjour Vincent");
    return EXIT_FAILURE;
  } else {
	
    //On a 0 ou 1 nom(s) fournis
	   printf("Bonjour");
	
     if (argc!=1){
			 

      printf(" %s", argv[1]) ;
 }
	 printf("\n");
  return EXIT_SUCCESS;  
 }
}