#include <stdio.h>
#include <stdlib.h>

/* Afficher, température en Celsius.
   Afficher, température en Fahrenheit.
  */
    int main (int argc, char ** argv) 
		{	  
			float tempCelsius ;
			float tempFahr ;
			
	   // Saisie
			
    printf("Conversion de température(Celsius -> Fahrenheit)\n\nTempérature en °Celsius");
     
	  // Saisie
	    scanf("%f", &tempCelsius);
	    
		 //Calcul
				tempFahr	=	32	+	(9	*	tempCelsius)	/	5 ;
			printf("Temperature Fahrenheit: %7.2f\n",tempFahr);
					 
					 return EXIT_SUCCESS;
					 
					 
					 }
