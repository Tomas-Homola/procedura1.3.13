#include <stdio.h>
#include <stdlib.h>

void vymen(char *str, int num)
{
	int x, y;
	
	x = rand()%num;
	y = rand()%num;
	
	//printf("x = %d\ny = %d\n", x, y);	//kontrola
	char u;
	
	u = str[x];
	str[x] = str[y];
	str[y] = u;
}

void npa(char *str, int num)
{
	int i, j = 0;
	char u;
	for (i = 97; i < 97 + num; i++)
	{
		u = i;
		str[j] = u;
		j++;
	}
	
	if (num != 1) // ked je pocet pismen = 1, netreba nic prehadzovat
	{
		//int x;
		//x = rand()%num + 1; // celkovy pocet zavolani funkcie vymen, aby napr. pre cislo 26 nerobilo 26 zmien, ale iba nejaky mensi pocet (moze sa stat, ze to bude aj 26 samozrejme)
		
		for (i = 0; i < num; i++)	//bud < num alebo < x, este sa k tomuto spytat
		{
			//printf("zmena %d\n", i + 1);
			vymen(str, num);
		}
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
	
	char abc[] = {};
	
	//#################TEST PROCEDURY#################\\
	
	npa(abc, numL);
	printf("pismenka: %s\n", abc);
	//vymen(abc, numL);
	//printf("prehadzane pismenka: %s\n", abc);
	
	printf("task failed successfully\n");
}