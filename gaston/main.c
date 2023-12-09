#include <stdio.h>
#include <stdlib.h>
/* 
  
 */
int main (int argc,char**argv){
    
  int t_celsius ;
	printf("\nEntrez la température :") ;
	scanf("%d",&t_celsius);
	
	if (t_celsius > 50) {
		printf ("Gaston il fait chaud ") ;
		return EXIT_FAILURE ;
	}
	if (t_celsius < -50) {
		printf ("\nGaston il fait froid,ne sors pas ") ;
		return EXIT_FAILURE ;
	}

	printf (" Gaston met son pull") ;
	if (t_celsius < 6){
		printf (" Gaston met son manteau") ;
	  if (t_celsius < 0) {
			printf (" \nGaston met son écharpe") ;	
		}
 	 }
  printf (" Gaston sort.\n") ;
	return EXIT_SUCCESS ;
} 
 