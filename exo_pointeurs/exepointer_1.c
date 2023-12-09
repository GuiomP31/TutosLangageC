
#include <stdio.h>
	int main()
	{
		int i[2]={-3,8},*ptint1,*ptint2,somme;
		printf("\n Adr.i[0] = %d\n Adr.i[1] = %d ",&i[0],&i[1]);
		printf("\n Adr. ptint1 = %d",&ptint1);
		printf("\n Adr. ptint2 = %d",&ptint2);
		printf("\n Adr. somme = %d",&somme);
		ptint1 = &i[0];
		ptint2 = &i[1];
		somme = *ptint1 + *ptint2;
		printf("\n Somme = %d",somme);
		somme = i[0] + i[1];
		printf("\n Somme = %d\n",somme);
		return 0;
	}
