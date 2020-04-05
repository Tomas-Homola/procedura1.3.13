#include <stdio.h>
#include <stdlib.h>

void npa(char *str, int num)
{
	
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
	
	//#################TEST PROCEDURY#################\\
	
	npa(abc, numL);
	printf("pismenka: %s\n", abc);
	
	printf("task failed successfully\n");
}