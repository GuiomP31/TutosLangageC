
	#include <stdio.h>
	int main()
	{
		void sompro(int, int, int *, int *);
		int x=2, y=3, s, p;
		sompro(x,y,&s,&p);
		printf("\n %d %d %d %d\n", x,y,s,p);
		return 0;
	}

	void sompro(int a, int b, int *p, int *m)
	{
		*p = a+b;
		*m = a*b;
	}


