#include <stdio.h>
#include <stdlib.h>

void npa(char *str, int num)
{
	srand(time(NULL));
	//printf("pismena: %s\nnum: %d\n", str, num); //test
	char u;
	int i, j, tahy[26] = {}, rNum, check, k = 97; //k je pre "hodnoty" pismen, i a j pre indexi
	i = 0;
	do
	{
		rNum = rand()%num+1;
		
		tahy[i] = rNum;
		
		check = 0;
		
		for (j = 0; j < i; j++)
		{
			if (rNum == tahy[j])
			{
				check = 1;
				continue;
			}
		}
		
		if (check == 0)
			{
				i++;
				u = k; // priradi pismenko to "u"
				str = u; // priradi "u" na adresu "str"
				str++; //posunie adresu "str"
			}
		
	} while (i < num);
	
	for (i = 0; i < num; i++)
		{
			printf("%d\n", tahy[i]);
		}
}

main()
{
	srand(time(NULL));
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
	char abc2[numL];
	char abc3[] = {};
	char u;
	int i, j = 0;
	
	/*BASIC CONCEPT: este tu doplnit algoritmus na loteriu, ktory mi da random poradie numL
	cislic, ktore budu potom pozicie v mojom abc poli, budu sa postupne naplnat a kazde cislo
	bude predstavovat nejake ine pismeno*/
	
	//printf("cely string: %s\n", abc);
	
	//#################TEST PROCEDURY#################\\
	
	npa(abc, numL);
	printf("pismenka: %s\n", abc);
	
	printf("task failed successfully\n");
}