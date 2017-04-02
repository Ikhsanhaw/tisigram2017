#include <stdio.h>

int main(){
	int X, H;
	scanf("%d %d", &X, &H);
	
	if(X<=0){
		printf("mustahil\n");
	}else{
		printf("%d\n", H/X);
	}
	
	return 0;
}
