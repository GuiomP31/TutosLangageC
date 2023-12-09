
#include <stdio.h>
int main()
{
	int *pti,tab[10]={2,-1,3,4,5,-6,-3,9,4,-8};
	float x,coef[3]={3.2,-1.5,7.4},*ptf;
	pti=&tab[1];
	printf("Message 1 :  %d\n",pti);
	pti--;
	ptf = &coef[0];
	x = (float)*pti * ptf[1]; 
	printf("Message 2 :  %f\n",x);
	pti += 2;
	printf("Message 3 :  %d\n",*pti);
	printf("Message 4 :  %d\n",pti[5]);
	ptf++;
	x = (float)tab[4]**ptf;
	printf("Message 5 :  %f\n",x);
	return 0;
}
