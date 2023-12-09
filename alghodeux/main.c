#include <stdio.h>
#include <stdlib.h>
/* 
  
 */
int main(int argc, char **argv)
{
	int nombre;
	int somme = 0;
	int compteur = 0;

	while (1)
	{
		printf("Veuillez rentrer un nombre : \n");
		scanf("%d", &nombre);

		if (nombre < 0)
			break;
		printf("Continuez encore !!\n");
		somme = somme + nombre;
		compteur = compteur + 1;
	}
	printf("Vous avez rentré un nombre négatif perdus !!!!\n");
	printf("La somme des nombres est = %d\n", somme);
	printf("Vous avez rentré %d nombres.\n", compteur);
	return 0;
}
