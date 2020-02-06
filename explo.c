#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct Lieux
{
	char name[10];
	char description[80];
	int dif;
	int tID[2];
};
typedef struct Lieux lieux;

void deplacement (lieux tLieux[], int *lieuAct, int *stamina)
{
	int lieuChoix;
	
	int ok = 0;
	while (ok == 0)
	{
		printf("Ou voulez vous aller ?\n");
		scanf("%d",&lieuChoix);
		
		for (int i = 0; i < 2; i++)
		{
			if (tLieux[*lieuAct].tID[i] == lieuChoix)
			{
				*lieuAct = lieuChoix;
				*stamina -= tLieux[*lieuAct].dif;
				printf("Vous etes arrive dans un lieu ou il y a %s.\n", tLieux[lieuChoix].description);
				ok ++;
			}
		}
		
		if (ok == 0)
		{
			printf("Vous ne pouvez pas atteindre cette destination.\n");
		}
		
	}
	
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
	
	int stamina = 100;
	int lieuAct = 0;
	int game = 0;
	char choix[4];
	
	while (game == 0)
	{
		printf("Vous avez %d stamina.\n", stamina);
		printf("Vous etes au lieu %d. Vous pouvez atteindre les lieux :\n", lieuAct);
	
		for (int i = 0; i<2; i++)
		{
			printf(" %d\n", tLieux[lieuAct].tID[i]);
		}
	
		deplacement(tLieux, &lieuAct, &stamina);
		
		if(tLieux[lieuAct].dif > 10)
		{
			printf("Voulez vous creer un avant poste ?\n");
			scanf("%s", choix);
			
			if (strcmp(choix, "oui") == 0)
			{
				strcat(tLieux[lieuAct].description, ". Il y a un avant poste dans ce lieu.\n");
				tLieux[lieuAct].dif /= 2;
				printf("L'avant poste a ete cree.\n");
			}
		}
		
		if(tLieux[lieuAct].dif < 5)
		{
			printf("Voulez vous vous reposer ?\n");
			scanf("%s", choix);
			
			if (strcmp(choix, "oui") == 0)
			{
				stamina += 50;
				if (stamina >100)
				{
					stamina = 100;
				}
				printf("Vous vous etes repose.\n");
			}
		}
		
		printf("Pour continuer taper 0, sinon n'importe quel autre chiffre.\n");
		scanf("%d", &game);
	}


	
	return 0;
}