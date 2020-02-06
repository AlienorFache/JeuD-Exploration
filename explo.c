#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct Lieux
{
	char name[10];
	char description[30];
	int dif;
	int tID[5];
};
typedef struct Lieux lieux;

void deplacement (lieux lieu0, lieux lieu1, lieux lieu2)
{
	char lieuChoix[7];
	
	int ok = 0;
	while (ok == 0)
	{
		printf("Ou voulez vous aller ?\n");
		scanf("%s",lieuChoix);
		
		if (strcmp(lieuChoix, lieu0.name) == 0)
		{
			printf("Vous aller dans un endroit ou il y a %s.\n", lieu0.description);
			ok ++;
		}
		if (strcmp(lieuChoix, lieu1.name) == 0)
		{
			printf("Vous aller dans un endroit ou il y a %s.\n", lieu1.description);
			ok ++;
		}
		if (strcmp(lieuChoix, lieu2.name) == 0)
		{
			printf("Vous aller dans un endroit ou il y a %s.\n", lieu2.description);
			ok ++;
		}
	}
}

int main ()
{
	lieux lieu0 = {"lieu1", "une foret tropical", 12,{1,2}};
	lieux lieu1 = {"lieu2", "des montagnes", 5,{0,2}};
	lieux lieu2 = {"lieu3", "une plage de sable blanc", 19,{0,1}};
	
	
	deplacement(lieu0, lieu1, lieu2);

	
	return 0;
}