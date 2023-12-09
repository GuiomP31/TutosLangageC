
#include <stdio.h>

/*void changer(int);
int main()
{
	int i = 4;
	changer(i);
	printf("Après appel de la fonction i = %d\n", i);
	/*La valeur de i n'a pas été modifiée par la fonction*/
	//return 0;
//}

/*void changer(int k)
{
	printf("Dans la fonction k = %d\n", k);
	k += 33;
	printf("Puis k = %d\n", k);
}*/

/*void changer(int *);
int main()
{
	int i = 4, *pti;
	pti= &i;
	changer(pti);
	printf("Après appel de la fonction i = %d\n", i);
	/*La valeur de i n'a pas été modifiée par la fonction*/
	//return 0;
//}
/*void changer(int *pt) {

	*pt = *pt + 33;
}*/


void changer(int,int,int *, int *);
int main()
{
	int i = 4;
	int j = 5; 
	int some, *ptsome;
	int prod, *ptprod;
	ptsome= &some;
	ptprod= &prod;
	changer(i,j,ptsome,ptprod);
	printf("Après appel de la fonction la somme est de = %d\n", some);
	printf("Après appel de la fonction le produit est de = %d\n", prod);
	/*La valeur de i n'a pas été modifiée par la fonction*/
	return 0;
}
void changer(int a,int b,int *pts,int *ptp) {

	*pts = a + b;
	*ptp = a * b;
}

