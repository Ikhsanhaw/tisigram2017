/*
- LANTAI BERAPA -
Author 	: Arief Subagja
Date	: 28 March 2016
*/



#include<stdio.h>
#include<string.h>


int main(){
	int n,i;
	char instruksi[6];
	
	scanf("%d\n",&n);
	gets(instruksi);
	if(strcmp(instruksi,"GANJIL")==0)
	{
		for(i=1; i<=n; i++)
		{
			if(i%2!=0)
			{
				printf("%d ",i);
			}
		}
	}
	else if (strcmp(instruksi,"GENAP")==0)
	{
		for(i=1; i<=n; i++)
		{
			if(i%2==0)
			{
				printf("%d ",i);
			}
		}
	}
	printf("\n");
return 0;
}
