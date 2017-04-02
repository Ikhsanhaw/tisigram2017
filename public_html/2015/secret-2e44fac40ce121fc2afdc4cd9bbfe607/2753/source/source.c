#include <stdio.h>

int main()
{
	int in;
	
	scanf("%d", &in);
	
	if(in==0){
		printf("%d\n", in);
	}
	else{
		printf("%d\n", (in*in)*2);
	}
	
	return 0;
}
