#include<stdio.h>

int main()
{
	int S, M;
	
	scanf("%d",&S);
	scanf("%d",&M);
	if((S > 0 && S <= 50001) && (M > 0 && M <=50001)){
		if(M<=S*2)
		{
			printf("PERANG\n");
		}
		else
		{
			printf("MUNDUR\n");
		}
	}

	return 0;
}
