#include<stdio.h>
#include<string.h>
int main()
{
	int N,n,i,j,k;
	char kata[1000][15];
	
	k=1;
	scanf("%d", &N);
	
	for (i=0; i<N; i++)
	{
		scanf("%s", &kata[i][k]);
		
    }
    for (i=0; i<N; i++)
	{
		printf("%s\n", &kata[i][k]);
    }
	
	return 0;
}
