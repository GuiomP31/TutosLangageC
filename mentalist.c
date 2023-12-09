#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

// Constantes
#define TOUR_MAX 8
#define MIN 1
#define MAX 100

/*
    Jeu Mentaliste.
    Le programme choisit aléatoirement un codeSecret secret(un entier entre 1 et 100).
L'utilisateur dispose de 8 essais pour trouver ce codeSecret secret.
Au bout des 8 essais infructueux, l'utilisateur a perdu et le programme révèle le codeSecret secret.
A chaque essai:
L'utilisateur propose un nombre (une saisie hors limite n'est pas prise en compte)
S'il s'agit du nombre secret, c'est gagné et le nombre d'essais qui aura été nécessaire est affiché.
Sinon le programme affiche si le nombre secret est plus grand ou plus petit que le nombre.

	Vincent
*/

/*
	Retourne "VRAI" si n est une saisie valide.
		"FAUX" sinon.
*/
int saisieValide(int n) {
	return n >= MIN && n <= MAX;
}

int main(int argc, char** argv)
{

	// saisie utilisateur, numéro du tour de jeu
	int saisie, tour = 1;
	bool gagne = false, perdu = false;

	// choix du code secret
	srand(time(NULL));
	int codeSecret = rand() % (MAX-MIN) + MIN;

	// mode triche
	if (argc == 2 && !strcmp(argv[1], "triche"))
		printf("MODE TRICHE : le code secret vaut %d.\n", codeSecret);
	
	do { // Tour de jeu
		
		// Affiche le nombre d'essais restants
		if (tour == TOUR_MAX)
			printf("\nATTENTION! Dernier essai...\n");
		else
			printf("\nIl vous reste %d essais\n", TOUR_MAX - tour + 1);
				
		do { // Gère la saisie utilisateur
			printf("Proposez votre nombre [%d-%d] : ", MIN, MAX);
			scanf("%d", &saisie);
		} while (! saisieValide(saisie));

		// Gestion de la proposition
		if (codeSecret < saisie)
			printf("Le code secret est plus petit que %d.\n", saisie);
		else if (codeSecret > saisie)
			printf("Le code secret est plus grand que %d.\n", saisie);
		else
			gagne = true;				

		// Passage au tour suivant
		tour = tour + 1;
		perdu = (tour > TOUR_MAX);

	} while (!gagne && !perdu);

	// Gestion des 2 fins de partie possibles
	if (gagne) { // L'utilisateur a trouvé le code secret

		printf("Vous avez trouvé en %d tour(s)\n", tour);

		// Evaluation de la performance
		if (tour == 1 )
				printf ("Extraordinaire! Vous devez avoir un don!");
		else if (tour <= (TOUR_MAX / 2) )
				printf ("Tres impressionant!");
		else if (tour == TOUR_MAX)
			printf ("Ouf, il etait temps!");
		else
			printf ("Bravo!");

	} else { // L'utilisateur a perdu

		printf("Vos tentatives n'ont pas été couronnées de succès..."
			"\nVous ferez mieux la prochaine fois!");
	}
printf("\n");
return EXIT_SUCCESS;
