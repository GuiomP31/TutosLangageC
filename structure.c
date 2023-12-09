#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Personne
{
	char nom[50];
	char prenom[50];
	int age;
};

struct Etudiants
{
	struct Personne personne;
	char filiere[50];
	int annee;
};

void affiche_etudiants(struct Etudiants *p)
{
	printf("\n%s %s (%d ans), Annee : %d. Filiere : %s",
		   p->personne.prenom, p->personne.nom, p->personne.age,
		   p->annee, p->filiere);
}

int main(int argc, char **argv)
{
	struct Etudiants a;
	struct Etudiants b = {{"Leo", "Nar", 24}, "Peinture", 3};
	strcpy(a.personne.nom, "Ronimo");
	strcpy(a.personne.prenom, "Jay");
	a.personne.age = 26;
	strcpy(a.filiere, "Sociologie");
	a.annee = 1;
	affiche_etudiants(&a);
	affiche_etudiants(&b);
	struct Etudiants *p = &b;
	(*p).annee++;
	p->annee++;

	strcpy(p->personne.nom, "Ricaud");
	strcpy(p->personne.prenom, "Lea");
	strcpy(p->filiere, "Histoire");
	affiche_etudiants(p);
	printf("\n");
	return (EXIT_SUCCESS);
}
