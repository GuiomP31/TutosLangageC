#include <stdio.h>
	int main()
	{
		int tab[5], *ptab1, *ptab2;
		int i;
		for (i=0;i<5;i++)
			scanf("%d",tab+i);
		for (i=0;i<5;i++)
			printf("\n%d",tab[i]);
		ptab1=tab;
		
		printf("\n%d %d",ptab1,ptab1++);
		ptab1=tab+2;
		ptab2=tab+4;
		printf("\nAdr.tab[2]=%d\nAdr.tab[4]=%d",ptab1,ptab2);
	
		printf("\nNb.elements=%d\n",ptab2-ptab1-1);
		return 0;
	}


