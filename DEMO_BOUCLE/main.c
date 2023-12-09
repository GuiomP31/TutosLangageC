#include <stdio.h>
#include <stdlib.h>

/* 
  */
    int main (int argc, char ** argv) {
	  int i;
		  
	 // (init ; condition de continuité; fin itération)		
	//  i++ équivaut à i = i+1

        for (i=1; i<=10; i++){
            printf("a");

      }
		
        for (i=1; i<=10; i++){
            printf("a\n");
      }
	// Afficher les nombres de 1 à 10 :
			  printf("affichage des nombres 1 à 10\n");
			  for(i=1; i<=10; i++){
			  printf("%d\n",i);
			}
			
			
		// Afficher les nombres pairs entre 2 et 10 :
			 printf("affichage des nombres pairs de 2 à 10\n");
			 for(i=1; i<=10; i++){
			 if(i%2==0)
			 printf("%d\n",i);
			 }
			
		// Afficher les nombres de 10 à 1 :
			  printf("affichage des nombres 10 à 1\n");
			  for(i=10; i>0; i--){
				printf("%d\n",i);
		}
			
		// Afficher les lettres de l' alphabet :
			 printf("affichage des lettres de l' alphabet\n");
			 for(i=65; i<=90; i++){
				printf("%c\n",i);
		}
		}
   
   
