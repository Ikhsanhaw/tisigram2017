#include<stdio.h>

int main()
{
	long S, M;
	
	scanf("%l",&S);
	scanf("%l",&M);
	if((S > 0 && S <= 50001) && (M > 0 && M <=50001)){
		if(M<=S*2)
		{
			printf("PERANG");
		}
		else
		{
			printf("MUNDUR\n");
		}
	}

	return 0;
}
