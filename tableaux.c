#include <stdio.h>
#include <stdlib.h>
/*
  
  */

int main(int argc, char **argv)
/*{
 int tableau[10];
 int i;


    for (i = 0 ; i < 10 ; i++)
    {
    
		printf("Saisir un nombre : \n");
		scanf("%d", &tableau[i]);

    }

    return 0;
}*/

// Version avec pointeur
{
	

		int i;
		int taille;
		printf("Entrez le nombre d'elemebts du tableau : ");
		scanf("%d", &taille);
		int *pointer = (int *)calloc(taille, sizeof(int));

		/* Un petit test sur le bon fonctionnement de calloc */
		//assert( pointer != NULL );

		/* Le dernier élément du tableau ne sera pas affecté par la */
		/* boucle mais n'oubliez pas que calloc initialise de toute */
		/* façon à 0 chaque octet. */
		for (i = 0; i < taille; i++)
		{
			pointer[i] = i;
		}

		/* On affiche le contenu du tableau d'entier */
		/* Ce qui donne : 0 1 2 3 4 5 6 7 8 0 */
		for (i = 0; i < taille; i++)
		{
			printf("%d ", pointer[i]);
		}
		printf("\n");

		/* On libère le bloc de mémoire alloué dynamiquement */
		free(pointer);

		return 0;
	
}