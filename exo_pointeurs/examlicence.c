/* En supposant que le tableau b[][], est implanté en mémoire à partir de l’adresse 2000, qu’affiche le programme suivant?  */

#include <stdio.h>
int main()
{
	int b[3][5], i, j, *p = *b;
	for (i=0 ; i<3 ; ++i)
		for (j=0 ; j<5 ; ++j)
			b[i][j] = i*5 + j;
	for (i=0 ; i<15 ; ++i)
	{
		if (i % 5 == 0)
			printf("\n");
		printf("%12d", *(p+i));
	}
	printf("\n\n%12d%12d\n%12d%12d\n%12d%12d\n%12d%12d",
		**b, **(b+1),
		*(b[0]+1), *(*b + 1),
		*(b[1] + 2), *(*(b + 1) + 2),
		*(b[2] + 3), *(*(b + 2) + 3));
	printf("\n\n%-15s%s%12d\n%-15s%s%12d\n%-15s%s%12d\n\n",
		"(int) b", "=", (int)b,
		"(int) *b", "=", (int)*b,
		"( int) **b", "=", (int)**b);
 return 0;
}

/* Rappels:
Il est rappelé que les écritures:

	a[i] et *(a + i)

sont strictement équivalentes

Le format d’impression %-15s signifie que 15 emplacements sont réservés pour l’impression de la chaîne de caractères associée, et que dans ce champ, la chaîne est cadrée à gauche.

*/ 
