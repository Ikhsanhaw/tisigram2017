#include<stdio.h>

int main (){
	int i, bil, N;
	
	scanf("%d %d", &N, &bil);
	
	bil = bil + 64;
	for(i=bil; i>bil - N;i--)
	{
		if(i == bil - N + 1)
		{
			printf("%c\n", i);
		} else {
			printf("%c ", i);
		}
	}
	
	return 0;
}
