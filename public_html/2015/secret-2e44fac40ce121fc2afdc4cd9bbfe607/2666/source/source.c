#include <stdio.h>

int main()
{
	int in;
	
	scanf("%d", &in);
	
	if(in==0){
		printf("%d", in);
	}
	else{
		printf("%d", (in*in)*2);
	}
	
	return 0;
}
