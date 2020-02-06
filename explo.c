#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct Lieux
{
	char name[10];
	char description[30];
	int dif;
	int tID[2];
};
typedef struct Lieux lieux;

int deplacement (lieux tLieux[], int lieuAct)
{
	int lieuChoix;
	
	int ok = 0;
	while (ok == 0)
	{
		printf("Ou voulez vous aller ?\n");
		scanf("%d",&lieuChoix);
		printf("choix : %d\n",lieuChoix);
		
		for (int i = 0; i < 2; i++)
		{
			//printf("tID : %d, choix : %d\n", tLieux[lieuAct].tID[i], lieuChoix);
			if (tLieux[lieuAct].tID[i] == lieuChoix)
			{
				
				printf("Vous etes arrive dans un lieu ou il y a %s", tLieux[lieuChoix].description);
				ok ++;
			}
		}
		
		if (ok == 0)
		{
			printf("Vous ne pouvez pas atteindre cette destination.\n");
		}
		
	}
	
	return lieuAct;
}

int main ()
{
	lieux lieu0 = {"lieu0", "une foret tropical", 12,{4,2}};
	lieux lieu1 = {"lieu1", "des montagnes", 5,{2,5}};
	lieux lieu2 = {"lieu2", "une plage de sable blanc", 19,{3,4}};
	lieux lieu3 = {"lieu3", "d'enormes grottes", 15,{1,4}};
	lieux lieu4 = {"lieu4", "un volcan en activitee", 10,{0,2}};
	lieux lieu5 = {"lieu5", "un ranch", 1,{0,1}};	
	
	lieux tLieux[6] = {lieu0, lieu1, lieu2, lieu3, lieu4, lieu5};
	
	int lieuAct = 0;
	printf("Vous etes au lieu 1. Vous pouvez atteindre les lieux :\n");
	
	for (int i = 0; i<2; i++)
		{
			printf(" %d\n", tLieux[lieuAct].tID[i]);
		}
	
	
	lieuAct = deplacement(tLieux, lieuAct);

	
	return 0;
}