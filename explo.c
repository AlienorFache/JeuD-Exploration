#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main ()
{
	char pays1[10] = "Australie";
	char pays2[6] = "Maroc";
	
	char paysChoix[10];
	
	
	int ok = 0;
	while (ok == 0)
	{
		printf("Voulez vous aller en Australie ou au Maroc ?\n");
		scanf("%s",paysChoix);
		
		if (strcmp(paysChoix, pays1) == 0 || strcmp(paysChoix, pays2) == 0)
		{
			ok ++;
		}
	}
	
	printf("Vous avez atteind : %s.\n", paysChoix);
	
	return 0;
}