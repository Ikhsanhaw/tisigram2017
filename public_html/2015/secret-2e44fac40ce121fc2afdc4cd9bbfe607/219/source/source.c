#include<stdio.h>

int main()
	{
		char kata[10] ;
		int i;
		
		gets(kata);
		
		i = strlen(kata)-1;
		while( i >= 0)
			{
				printf("%c",kata[i]);
				i--;
			}
		printf("\n");
		return 0;
	}
