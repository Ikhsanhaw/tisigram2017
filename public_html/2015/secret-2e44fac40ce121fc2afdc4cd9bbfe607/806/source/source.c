#include<stdio.h>
#include<string.h>

struct testcase
{
	char Temp[50];
};

int main()
{
	char A[56];
	struct testcase T[150];
	int i, tc, j, k,l,m;
	
	scanf("%d", &tc);
	
	for(j=1; j<=tc; j++)	
	{
		scanf("%s", &A);
		
		i=0;
		k=0;
		while(A[i] != '\0' )
		{
			if((int)A[i] %2 ==0)
			{
				T[j].Temp[k]=A[i];
				k++;
			}
			
			i++;
		}
		T[j].Temp[k]='\0';
	}	
	
	for(i=1; i<=tc; i++)
	{
		j=0;
		while(T[i].Temp[j] != '\0')
		{
			printf("%c", T[i].Temp[j]);
			j++;
		}
		printf("\n");
	}
return 0;	
}
