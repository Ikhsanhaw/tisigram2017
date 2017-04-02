#include <stdio.h>

int main(){
	int X,Y,i;
	
	scanf("%d %d", &X, &Y);
	if(Y%2 == 1){
		for(i=1;i<X;i++){
			if(i%2==1){
			printf("%d\n", i);
			}
		}
	}else{
		for(i=1;i<X;i++){
			if(i%2==0){
			printf("%d\n", i);
			}
		}
	}
	return 0;
}
