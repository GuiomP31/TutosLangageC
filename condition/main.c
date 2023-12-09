#include <stdio.h>
#include <stdlib.h>
/* 
Commentaires sur plusieurs lignes
 */
int main(int argc, char **argv)
{

	int heure;

	printf("Quelle heure est-il ? ");
	scanf("%d", &heure);

	if (heure > 0 && heure < 7)
	{
		printf("Zzz... Zzz..... Zzz.... Zzzz\n");
	}
	else if (heure >= 7 && heure < 12)
	{
		printf("C'est le matin !\n");
	}
	else if (heure == 12)
	{
		printf("Il est midi !\n");
	}
	else if (heure > 12 && heure < 18)
	{
		printf("C'est l'après-midi !\n");
	}
	else if (heure >= 18 && heure < 24)
	{
		printf("C'est le soir !\n");
	}
	else if (heure == 24 || heure == 0)
	{
		printf("Il est minuit, dormez brave gens !\n");
	}
	else
	{
		printf("Il est l'heure de réapprendre à lire l'heure banane !\n");
	}
}

return 0;