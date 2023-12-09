#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>

bool lire_ligne(char *chaine, size_t max)
{
	size_t i;
	for (i = 0; i < max - 1; ++i)
	{
		char c;
		if (scanf("%c", &c) != 1)
			return false;
		else if (c == '\n')
			break;

		chaine [i] = c;
	}
		chaine [i] = '\0';
		return true;
}

int main(int argc, char **argv)
{
char chaine[255];

    printf("Quel est votre prénom ? \n");
	
    if (lire_ligne(chaine, sizeof chaine))
        printf("Bien le bonjour %s !\n", chaine);

	return 0;
}
