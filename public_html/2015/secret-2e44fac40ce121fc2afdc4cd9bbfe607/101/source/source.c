#include<stdio.h>


int main()
{
	int N,i;
	scanf("%d",&N);
	char kata_kata[N][15];
	
	for (i = 0; i < N; i++){
		scanf("%s",kata_kata[i]);
		
	}
	for (i = 0; i < N; i++){
		printf("%s\n",kata_kata[i]);
		
	}
	
	return 0;
}
