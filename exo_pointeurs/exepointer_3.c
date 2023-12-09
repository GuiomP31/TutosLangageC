	#include <stdio.h>
	int main()
	{
		void change(int,int *);
		int i = 4;

		printf("\n%d",i);
		change (i, &i);
		printf("\n%d\n", i ); 
		return 0;
	}
	void change(int k,int *adr)
	{
		*adr = k + 33;
	}
