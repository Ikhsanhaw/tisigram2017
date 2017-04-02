#include<stdio.h>

int main()
	{
		int N, i, maks;
		
		scanf("%d",&N);
		long int Bilangan[N];
		
		for(i = 0; i < N; i++)
			{
				scanf("%d",&Bilangan[i]);
			}
		maks = Bilangan[0];
		for(i = 1; i < N; i++)
			{
				if(Bilangan[i] > maks)
					{
						maks = Bilangan[i];
					}
			}
		printf("%d\n",maks);
		return 0;
	}
