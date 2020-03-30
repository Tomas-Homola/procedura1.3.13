#include <stdio.h>
#include <stdlib.h>

void nahodna_permutacia_abecedy(char *str, int num)
{
	
}

main()
{
	int numL, isCorrect = 0;
	do
	{
	printf("pocet prvch malych pismen abecedy: \n");
	scanf("%d", &numL);
	
	if (numL > 0 && numL < 27)
	{
		isCorrect = 1;
	} 
	else
	{
		printf("zle zadane cislo\n");
	}
	
	} while (isCorrect == 0); 
	
	char abc[26] = {};
	char u;
	int i, j = 0;
	
	/*BASIC CONCEPT: este tu doplnit algoritmus na loteriu, ktory mi da random poradie numL
	cislic, ktore budu potom pozicie v mojom abc poli, budu sa postupne naplnat a kazde cislo
	bude predstavovat nejake ine pismeno*/
	
	for (i = 97; i < 97+numL; i++)
	{
		u = i;
		abc[j] = u;
		//printf("%s\n", abc);
		j++;
	}
	
	printf("%s\n", abc);
	
	
}