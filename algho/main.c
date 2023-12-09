#include <stdio.h>
#include <stdlib.h>
/* 
  
 */
int main(int argc, char **argv)
{
	int a;
	int b;

	printf("Veuillez rentrer le premier nombre a : \n");
	scanf("%d", &a);

	printf("Veuillez rentrer le deuxième nombre b : \n");
	scanf("%d", &b);

	if (a > b)
	{
		printf("a est supérieur à b\n");
	}
	else if (b > a)
	{
		printf("b est supérieur à a\n");
	}
	else
	{
		printf("b est égal à a\n");
	}

	return 0;
}
