#include<stdio.h>

int main()
	{
		int N, i;
		long int angka, maks=0;
		
		scanf("%d",&N);
		
		for(i = 0; i < N; i++)
			{
				scanf("%d",&angka);
				if(angka > maks)
					{
						maks = angka;
					}
			}
			
		printf("%d\n",maks);
		return 0;
	}
