#include <stdio.h>
#include <stdlib.h>
/*
  
  */

void rectangle(float, float, float *, float *);
int main(int argc, char **argv)
{

	float largeur;
	float longueur;
	float perimetre, *ptperimetre;
	float surface, *ptsurface;
	ptperimetre = &perimetre;
	ptsurface = &surface;

	printf("Saisir la largeur : ");
	scanf("%f", &largeur);

	printf("Saisir la longueur : ");
	scanf("%f", &longueur);

	rectangle(largeur, longueur, ptperimetre, ptsurface);

	printf("Après appel de la fonction le perimetre est de = %f\n", perimetre);
	printf("Après appel de la fonction la surface est de = %f\n", surface);

	return EXIT_SUCCESS;
}
void rectangle(float a, float b, float *ptperimetre, float *ptsurface)
{

	*ptperimetre = (a + b) * 2;
	*ptsurface = a * b;
}