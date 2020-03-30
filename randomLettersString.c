#include <stdio.h>

main()
{
	char u;
	int i;
	
	for (i = 97; i < 97+26; i++)
	{
		u = i;
		printf("%c\n%d\n", u, u);
	}
}