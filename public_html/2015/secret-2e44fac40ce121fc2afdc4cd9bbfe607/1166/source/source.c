#include <stdio.h>


int main(){
	int a = 0, b = 0;
	scanf("%d %d", &a,&b);
	if(b>(2*a)){
		printf("MUNDUR\n");
	}else if(b==(2*a)){
		printf("PERANG\n");
	}else{
		printf("PERANG\n");
	}
	
	return 0;
}