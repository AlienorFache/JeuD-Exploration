#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main ()
{
	int tPays[2] = {0,1};
	int choix;
	
	int ok = 0;
	while (ok == 0)
	{
		printf("Tapez 0 pour aller en Australie et 1 pour aller au Maroc.\n");
		scanf("%d",&choix);
		
		if (choix == 0 || choix == 1)
		{
			ok ++;
		}
	}
	
	if (choix == 0)
	{
		printf("Vous etes arrive en Australie.\n");
	}
	else
	{
		printf("Vous etes arrive au Maroc.\n");
	}
	
	return 0;
}