#include <stdio.h>

int main(){
	int i,X,ins;
	scanf("%d\n%d",&X,&ins);
	if ( ins % 2 == 0) {
		for ( i = 1 ; i <= X ;i++ ){
			if(i % 2 == 0) {
				printf("%d",i);
				if(i+2 <= X && i>1) printf(" ");
			}
			
		}
	}else{
		for ( i = 1 ; i <= X ;i++ ){
			if(i % 2 != 0) {
				printf("%d",i);
				if(i+2 <= X) printf(" ");
			}
			
		}
	}
	printf("\n");
	return 0;
}