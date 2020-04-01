#include <stdio.h>
#include <stdlib.h>

void npa(char *str, int num)
{
	char u;
	int i, j, tahy[26] = {}, rNum, check, k = 97; //k je pre "hodnoty" pismen, i a j pre indexi
	i = 0;
	do
	{
		rNum = rand()%num+0;
		
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
				u = k; // priradi pismenko to "u"
				printf("miesto: %d; char: %c\n", tahy[i], u); //kontrolne vypisovanie
				str[tahy[i]] = u;
				k++;
				i++;
			}
		
	} while (i < num);
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
	char u;
	int i, j = 0;
	
	/*BASIC CONCEPT: pomocou algoritmu na loteriu, ktory mi da random numL
	cislic bez opakovania -> pozície v stringu, budu nasledovne naplnane jednotlivé pozicie v mojom     stringu (abc), pričom písmená sa budú napĺňať postupne, ale na nahodne miesta v tom stringu*/
	
	//#################TEST PROCEDURY#################\\
	
	npa(abc, numL);
	printf("pismenka: %s\n", abc);
	
	printf("task failed successfully\n");
}