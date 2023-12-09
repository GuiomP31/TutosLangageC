#include <stdio.h>
#include <stdlib.h>

int main (int argc, char ** argv)
	
{
	int i ;
	float rendue ;
	float montant_du ;
  float somme_versee ;
	float billets_pieces [13]={100.,50.,20.,10.,5.,2.,1.,.5,.2,.1,.05,.02,.01} ;
  printf ("montant dû :") ;
  scanf ("%f",&montant_du) ;
  printf ("somme versée :") ;
  scanf ("%f",&somme_versee);
	
	for (i=0; i<13; i++)
	printf ("%6.2f\n",billets_pieces[i]) ;
	rendue = somme_versee - montant_du ;
	printf("monnaie à rendre : %6.2f\n ", rendue) ;
	
	
	
	
	
	
	
	return EXIT_SUCCESS ;
	
	
	
}